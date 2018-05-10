import pandas as pd
import numpy as np
import glob
from sklearn_porter import Porter
import datetime

# data flow 1

def grid_search():
    # https://github.com/nok/sklearn-porter
    def port_model(model, name="rf_from_sklearn.cpp"):
        porter = Porter(model, language='c')
        output = porter.export(embed_data=True)

        with open(name, "w") as text_file:
            text_file.write(output)
# data flow 2

def get_pred_features(shift=False, moved=False, peaks=False, std=False, vert=False):
    base_feautres = ['Vertical', 'Radial', 'Forward', 'Speed']
    func = ['_max', '_min', '_std', '']
    # for func in ['max','min','std','']:
    features = [feat + func for feat, func in itertools.product(base_feautres, func)]
    if vert:
        features = [feat + func for feat, func in itertools.product(base_feautres, func) if 'Vert' in feat]
    if std:
        features = [feat + func for feat, func in itertools.product(base_feautres, func) if 'std' in func]

    if moved:
        features += [feat + '_moved' for feat in features if not 'shifted' in feat]
    if shift:
        features += [feat + '_shifted' for feat in features if not 'moved' in feat]
    if peaks:
        features += ['speed_peaks', 'speed_valleys', 'vert_peaks', 'vert_valleys']

    return features

def get_category(sheet_name):
    if 'bump' in sheet_name.lower():
        return 4
    elif 'reg' in sheet_name.lower() or 'stan' in sheet_name.lower():
        return 0
    elif 'zig' in sheet_name.lower():
        return 2
    elif 'stop' in sheet_name.lower():
        return 5
    elif 'stand' in sheet_name.lower():
        return 1

class DataLoader:
    def __init__(self):
        path = '/home/gidi/nbs/RoadTrackACC/data/'
        self.files = glob.glob(path+'*.xlsx')

    def load_data(self, files):
        # load data from excel files

        df_list = []
        big_df = pd.DataFrame()

        for file_id in files:
            print([file_id])

            excel = pd.ExcelFile(file_id)
            hz = 50 if file_id != 1 else 100

            features = ['Vertical', 'Forward', 'Radial', 'Speed', 'Ignition', 'level_0']
            numeric_features = ['Vertical', 'Forward', 'Speed', 'Radial']

            for i, name in enumerate(excel.sheet_names):
                df = excel.parse(name, header=1)
                df = df.reset_index()
                df.columns = [column.replace(' ', '') for column in df.columns]
                df[numeric_features] = df[numeric_features].apply(pd.to_numeric, errors='coerce')
                df = df[features]  #
                df.Vertical = df.Vertical + 240  # normalize" weritcal Axis

                df = df.set_index(pd.to_datetime(df['level_0'].str.replace(']', '')))  # add more columns
                df['file'] = file_id
                df['sheet'] = name
                df['cat_id'] = get_category(name)

                big_df = big_df.append(df)  # put it all in big_df
                df_list.append(df)

        big_df['time_sec'] = big_df.index.round('s')  # add rounded second column
        big_df = big_df.dropna()
        self.bif_df =  big_df

    def load_bumper_annotations(self, file, bumper_offset=10):
        # annotations are bumpers and hard stops, and later towings

        anot = pd.read_csv(file)

        bumpers = anot[anot.event == 'bumper']
        # fit date time format. first workout hard stops
        bumpers['start time'] = pd.to_datetime(bumpers['start time'])
        # bumpers['end time'] = pd.to_datetime(bumpers['end time'])

        # offset bumpers
        bumpers.loc[bumpers.file.isin(['Acc_Data_0205.xlsx', 'Acc_Data_0305.xlsx']), 'start time'] = \
        bumpers.loc[bumpers.file.isin(['Acc_Data_0205.xlsx', 'Acc_Data_0305.xlsx']), 'start time'] + pd.DateOffset(seconds=10)

        bumpers_list = []
        first_second_stop = []
        for row in bumpers.iterrows():
            i = 0
            time = row[1]['start time']
            first_second_stop.append(time)
            # while time >= row[1]['start time'] and time<=row[1]['start time']+datetime.timedelta(0,1):
            for i in range(1, 3):
                bumpers_list.append(time)
                time = row[1]['start time'] + datetime.timedelta(0, i)
                i += 1

        # set bumper annotations
        self.big_df['bumper_on'] = 0
        self.big_df['cat_id'][(self.big_df.cat_id == 40)] = 4
        self.big_df['bumper_on'][(self.big_df.cat_id == 4) & (self.big_df.time_sec.isin(bumpers_list))] = 1
        self.big_df['cat_id'][(self.big_df.cat_id == 4) & (self.big_df.time_sec.isin(bumpers_list))] = 40

    def load_stop_annotations(self, file):
        anot = pd.read_csv(file)
        hard_stops = anot[anot.event == 'hard_stop']
        # fit date time format. first workout hard stops
        hard_stops['start time'] = pd.to_datetime(hard_stops['start time'])
        hard_stops['end time'] = pd.to_datetime(hard_stops['end time'])

        hard_stop_list = []
        first_second_stop = []
        for row in hard_stops.iterrows():
            i = 0
            time = row[1]['start time']
            first_second_stop.append(time)
            while time >= row[1]['start time'] and time <= row[1]['end time']:
                hard_stop_list.append(time)
                time = row[1]['start time'] + datetime.timedelta(0, i)
                i += 1

        # set hard stops annotations
        self.big_df['hard_stop_on'] = 0
        self.big_df['hard_stop_on'] \
            [(self.big_df['file'] == 'Acc_Test_240418.xlsx') & (self.big_df.cat_id == 5) & (
            self.big_df.time_sec.isin(hard_stop_list))] = 1
        self.big_df['hard_stop_on'] \
            [(self.big_df['file'] == 'Acc_Test_240418.xlsx') & (self.big_df.cat_id == 5) & (
            self.big_df.time_sec.isin(first_second_stop))] = 2

    def build_second_dataset(self):
        features = ['Vertical', 'Radial', 'Forward', 'Speed']
        self.research_dfa = self.big_df.groupby('time_sec')[features].mean() \
            .join(self.big_df.groupby('time_sec')[features].std(), rsuffix='_std') \
            .join(self.big_df.groupby('time_sec')[features].max(), rsuffix='_max') \
            .join(self.big_df.groupby('time_sec')[features].min(), rsuffix='_min') \
            .join(self.big_df.groupby('time_sec')['cat_id'].max()) \
            .join(self.big_df.groupby('time_sec')['bumper_on'].max()) \
            .join(self.big_df.groupby('time_sec')['hard_stop_on'].max())

        self.research_dfa = self.research_dfa.fillna(0)

    def shift_dataset(self):
        # add previus and next second to feautres, result in x*3 features
        self.research_dfa = self.research_dfa.join(self.research_dfa.shift(-1), rsuffix='_shifted').join(research_dfa.shift(1),rsuffix='_moved')
        self.research_dfa = self.research_dfa.fillna(0)

    def build_cont_dataset(self):
        # build datset of continues features
        self.research_dfb = self.research_dfa[self.research_dfa.cat_id < 4]