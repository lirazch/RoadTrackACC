from matplotlib import pyplot as plt
import pandas as pd
from sklearn.metrics import confusion_matrix
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
import numpy as np
from collections import Counter
from utils import *


def init_model(type='et', params={'estimators': 5}):
    # initialize different models for model selection
    if type == 'mlp':
        model = MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(15, 10), random_state=1)
    elif type == 'lr':
        model = LogisticRegression()
    elif type == 'svc':
        model = svm.SVC(decision_function_shape='ovo')
        # tree based models
    elif type == 'et':
        model = ExtraTreesClassifier(n_estimators=params['estimators'], random_state=0)
    elif type == 'ada':
        base_estimator = DecisionTreeClassifier(max_depth=4, random_state=0)
        model = AdaBoostClassifier(n_estimators=params['estimators'], random_state=0)
    elif type == 'rf':
        model = RandomForestClassifier(n_estimators=params['estimators'], max_depth=10, oob_score=True, random_state=1)
    else:
        model = ''
    return model


def mean_crossing(big_df, first_level=100, second_level=10, consec_thresh=25, axis='Forward', plots=False):
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


def select_model(data, features, model_names='', dest='towing', params={'estimators': 5}):
    # model selection script
    # can predict for now (given the right annotation):
    # Bumpers, Hard stops, slight towing

    models = [init_model(name) for name in model_names]
    print(bcolors.BOLD+f'predicting {dest} with {len(features)} feature count'+bcolors.ENDC)

    if dest == 'bumper':
        # under/over sampling is needed
        data = data[data.cat_id.isin([0, 1, 2, 3])].sample(int(len(data[data['bumper'] == 1]) * 1.2)).append(data[data['bumper'] == 1])

    if dest == 'standard':
        data = data[data.cat_id.isin([0, 2, 3])]
        dest = 'cat_id'

    if dest == 'slight_towing':
        data = data[data.slight_towing == 1].append(data[data.cat_id == 1])

    print('distribution', Counter(data[dest]))
    kf = KFold(n_splits=5, shuffle=True)
    for i, model in enumerate(models):
        results = []
        for samples_train, samples_test in kf.split(data):
            X_trn, X_val, y_trn, y_val = data[features].iloc[samples_train], \
                    data[features].iloc[samples_test], data[dest][samples_train], data[dest][samples_test]
            model.fit(X_trn, y_trn)

            score = model.score(X_val, y_val)
            results.append(score)
        try:
            port_model(model, f'models/{dest}-{model_names[i]}-test.cpp') # standard model will be saved as cat_id currenlty...
        except:
            print(f'well, this model {model}-{model_names[i]} is not suitable for porting')

        print('confusion matrix: [predXactual]:')
        print(cm(model.predict(X_val), y_val))
        print('model', 'accuracy', 'std')
        print(model_names[i], round(np.mean(results), 3), round(np.std(results), 3))
        write_experiment_to_log(model=model_names[i], results=round(np.mean(results), 3), dest=dest)


def write_experiment_to_log(model='', dataset_desc='', settings='', results='', dest=''):
    # write the experiments to an experiemtn log
    import hashlib
    config = json.load(codecs.open('config.json', 'r', 'utf-8-sig'))

    exp_df = pd.read_csv(config['experiment_log_file'], index_col=0)
    time = datetime.datetime.now()
    #dataset_code = hashlib.sha256(exp_df.values.tobytes()).hexdigest()
    dataset_desc = dataset_desc
    model = model
    settings = settings
    results = results
    validity = False
    dest = 'standard' if dest == 'cat_id' else dest
    values = [time, dataset_desc, model, settings, results, dest, validity]
    columns = ['dt', 'dataset_desc', 'model', 'result', 'setting','dest', 'valid']
    index = exp_df.index.max()+1 if exp_df.index.max()>=0 else 0
    ordered_df = pd.DataFrame({col: value for col, value in zip(columns, values)}, index=[index])
    exp_df = exp_df.append(ordered_df[columns])
    exp_df.to_csv(config['experiment_log_file'])
