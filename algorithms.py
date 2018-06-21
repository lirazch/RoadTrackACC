from matplotlib import pyplot as plt
import pandas as pd

from sklearn import svm
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split, KFold

from sklearn.neural_network import MLPClassifier
from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.metrics import confusion_matrix as cm

from sklearn.neural_network import MLPClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.metrics import precision_score, recall_score
import numpy as np
from collections import Counter
from utils import *
from imblearn.over_sampling import SMOTE


class Model_Selection:
    def __init__(self, validity=False, params={'estimators': 5, 'max_depth': 30}):
        self.config = json.load(codecs.open('config.json', 'r', 'utf-8-sig'))
        self.models_folder = self.config["models_folder"]
        self.validity = validity
        self.params = params

    def init_model(self, type='et'):
        # initialize different models for model selection
        if type == 'mlp':
            model = MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(15, 10), random_state=1)
        elif type == 'lr':
            model = LogisticRegression()
        elif type == 'svc':
            model = svm.SVC(decision_function_shape='ovo')
            # tree based models
        elif type == 'et':
            model = ExtraTreesClassifier(n_estimators=self.params['estimators'], max_depth=self.params['max_depth'],random_state=0)
        elif type == 'ada':
            base_estimator = DecisionTreeClassifier(max_depth=4, random_state=0)
            model = AdaBoostClassifier(n_estimators=params['estimators'], random_state=0)
        elif type == 'rf':
            model = RandomForestClassifier(n_estimators=self.params['estimators'], max_depth=self.params['max_depth'], oob_score=True, random_state=1)
        else:
            model = ''
        return model


    def mean_crossing(self, big_df, first_level=100, second_level=10, consec_thresh=25, axis='Forward', plots=False):
        # this is function return the maximum consecutive mean corssing, with 2
        # rolling means
        for row in big_df[['sheet', 'file']].drop_duplicates().iterrows():
            sheet = row[1][0]
            file = row[1][1]
            rolling = pd.DataFrame(big_df[(big_df.sheet == sheet) & (big_df.file == file)][axis].rolling(first_level).mean())
            rolling['time_sec'] = rolling.index.to_datetime().round('s')

            grouped = rolling.groupby('time_sec').mean()
            mean = grouped[axis].rolling(second_level).mean()
            trend = pd.DataFrame(np.abs(grouped[axis]) > np.abs(mean) + 1)[axis]
            consec_decreases = trend * (trend.groupby((trend != trend.shift()).cumsum()).cumcount() + 1)

            if plots:
                fig, ax = plt.subplots(figsize=(18, 4))
                ax.plot(grouped[axis])
                ax.set_title(sheet + ' consec:' + str(max(consec_decreases)))
                ax.plot(mean)
                ax.plot(trend * 10)
        print('mean crossing algorithm finished')


    def select_model(self, data, model_names='', dest='towing', down_smapling_factor=3,
                     negative_factor=0.5, upsample=False):
        # model selection script
        # can predict for now (given the right annotation):
        # Bumpers, Hard stops, slight towing
        if self.params['features']==1:
            pred_features = get_pred_features(shift=False, moved=False)
        else:
            pred_features = get_pred_features(shift=True, moved=True)

        models = [self.init_model(name) for name in model_names]
        print(bcolors.BOLD+f'predicting {dest} with {len(pred_features)} feature count'+bcolors.ENDC)

        if upsample:
            negs = sum(data[dest] == 0)
            sm = SMOTE(random_state=42)

        if dest == 'bumper':
            # under/over sampling is needed
                # down_smapling_factor 1 improves precision but hurts recall. with 6, recall starts to raise towards 25%,
                # but percision starts to decline towards 90% (on whole dataset)
            if not upsample:
                data = data[data.cat_id.isin([0, 1, 2, 3])].sample(int(len(data[data['bumper'] == 1]) * down_smapling_factor)).append(data[data['bumper'] == 1])

        if dest == 'standard':
            data = data[data.cat_id.isin([0, 2, 3])]
            dest = 'cat_id'

        if dest == 'slight_towing':
            if not upsample:
                data = data[data.slight_towing == 1].append(data[data.cat_id == 1])

        print('distribution', Counter(data[dest]))
        kf = KFold(n_splits=5, shuffle=True)
        for i, model in enumerate(models):
            results = []
            for samples_train, samples_test in kf.split(data):
                if upsample:
                    X_trn, y_trn = sm.fit_sample(data[pred_features].iloc[samples_train], data[dest][samples_train])
                    X_val, y_val = sm.fit_sample(data[pred_features].iloc[samples_test], data[dest][samples_test])
                else:
                    X_trn, y_trn = data[pred_features].iloc[samples_train], data[dest][samples_train]
                    X_val, y_val = data[pred_features].iloc[samples_test], data[dest][samples_test]


                model.fit(X_trn, y_trn)

                score = model.score(X_val, y_val)
                results.append(score)

            model_path = ''

            try:
                preds = model.predict(X_val)
                precision = round(precision_score(y_val, preds), 2)
                recall = round(recall_score(y_val, preds), 2)
            except:
                # when not 2 classes, precision recall gives error.
                # can be solved
                precision = 0
                recall = 0
            try:
                val = 'test' if not self.validity else 'valid'
                model_path = f'{self.models_folder}/{dest}/{dest}-{model_names[i]}-{round(score,2)}-{precision}-{recall}' \
                             f'-{datetime.date.today()}-{val}.cpp'
                port_model(model, model_path)  # standard model will be saved as cat_id currenlty...
                save_pickle(f'{dest}_{model_names[i]}_model.pkl', model)
            except:
                print(f'well, this model {model}-{model_names[i]} is not suitable for porting')

            print('confusion matrix: [pred X actual]:')
            print(cm(model.predict(X_val), y_val))
            print('model', 'accuracy', 'std')
            print(model_names[i], round(np.mean(results), 3), round(np.std(results), 3))
            self.write_experiment_to_log(model=model_names[i], acc=round(np.mean(results), 3), precision=precision, recall=recall,
                                    dataset_desc=len(data), dest=dest, model_path=model_path)

    def write_experiment_to_log(self, model='', dataset_desc='', acc='', precision='', recall='', dest='', model_path=''):
        # write the experiments to an experiment log

        exp_df = pd.read_csv(self.config['experiment_log_file'], index_col=0)
        time = datetime.date.today()
        #dataset_code = hashlib.sha256(exp_df.values.tobytes()).hexdigest()
        dataset_desc = dataset_desc

        dest = 'standard' if dest == 'cat_id' else dest
        try:
            statinfo = os.stat(model_path)
            size = statinfo.st_size
        except:
            size = ''
        values = [time, dataset_desc, model, round(acc,3), precision, recall, str(self.params), dest, model_path.split('/')[-1], size,  self.validity]
        columns = ['dt', 'dataset_desc', 'model', 'accuracy', 'precision', 'recall', 'setting', 'dest', 'model_path','size', 'valid']
        index = exp_df.index.max()+1 if exp_df.index.max() >= 0 else 0
        ordered_df = pd.DataFrame({col: value for col, value in zip(columns, values)}, index=[index])
        exp_df = exp_df.append(ordered_df[columns])
        exp_df.to_csv(self.config['experiment_log_file'])
