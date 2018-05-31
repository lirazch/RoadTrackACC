import pandas as pd
import numpy as np
import glob
from sklearn_porter import Porter
import datetime
import json
import codecs
import itertools
# data flow 1

import os, sys
ROOT_DIR = os.path.abspath("../")
sys.path.append(ROOT_DIR)

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

# https://github.com/nok/sklearn-porter
def port_model(model, name="rf_from_sklearn.cpp"):
    porter = Porter(model, language='c')
    output = porter.export(embed_data=True)

    with open(name, "w") as text_file:
        text_file.write(output)

    statinfo = os.stat(name)
    print(bcolors.OKBLUE+'model size in bytes is: '+bcolors.ENDC, statinfo.st_size)

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
    #using text heuristics
    # TODO: use a key file
    if 'bump' in sheet_name.lower():
        return 4
    elif 'tow' in sheet_name.lower():
        return 6
    elif 'reg' in sheet_name.lower() or 'stan' in sheet_name.lower():
        return 0
    elif 'zig' in sheet_name.lower():
        return 2
    elif 'stop' in sheet_name.lower():
        return 5
    elif 'dirt' in sheet_name.lower():
        return 3
    elif 'stand' in sheet_name.lower():
        return 1

####################

class DataLoader:

    def __init__(self):
        config = json.load(codecs.open('config.json', 'r', 'utf-8-sig'))
        path = '/home/gidi/nbs/RoadTrackACC/data/'
        self.files = glob.glob(path+'*.xlsx')
        self.big_df = ''
        self.key_df = pd.read_csv(config['experiment_key_file'])
        self.anot = pd.read_csv(config['annotation_file'])

    def load_data(self, files, source, test=False, plot=False):
    #
    # load data from excel files.
    # input: list of files (glob can be used)
    # if test=1, no more than 3 sheets are loaded per file, to gain speed
        if source=='Excel':
            df_list = []
            big_df = pd.DataFrame()

            for file_id in files:
                print(bcolors.OKBLUE+'Loading file:'+str(file_id)+bcolors.ENDC)

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
                    df.Vertical = df.Vertical + 240  # normalize veritcal Axis

                    df = df.set_index(pd.to_datetime(df['level_0'].str.replace(']', '')))  # add more columns
                    df['file'] = file_id.split('/')[-1]
                    df['sheet'] = name

                    df['cat_id'] = self.get_category_from_file(file_id, name)

                    big_df = big_df.append(df)  # put it all in big_df
                    df_list.append(df)

                    if plot:
                        df.resample('s').mean()[['Forward', 'Radial', 'Vertical', 'Speed']]\
                            .plot(title=name + ',' + file_id + ',' + str(get_category(name)), figsize=(16, 4))
                    if test==1 and i>3:
                        print(bcolors.OKBLUE+'break loader because test is 1'+bcolors.ENDC)
                        break

            big_df['time_sec'] = big_df.index.round('s')  # add rounded second column
            self.big_df = big_df.dropna()

        elif source == 'saved':
            #
            # Load a saved big_df
            #
            self.big_df = pd.read_csv('temp_big_df.csv')
            self.big_df.index = self.big_df.level_0
            print(bcolors.OKBLUE + 'Loading temp_big_df file:' + bcolors.ENDC)


    def get_category_from_file(self, file_name, sheet_name):

        if '/' in file_name:
            file_name = file_name.split('/')[-1]
        print(file_name, sheet_name)
        try:
            category_name = self.key_df[(self.key_df.file_name == file_name) & (self.key_df.sheet_name == sheet_name)].event_type.values[0]
            category_dict = {'Driving': 0, 'Hard stop': 5, 'Zigzag': 2, 'Bumper': 4, 'Dirty Road': 3, 'Tow': 6, 'Standstill': 1}
            return category_dict.get(category_name, -1)
        except:
            print(bcolors.FAIL+'error in sheet above. Check experiment log'+bcolors.ENDC)
            return -1

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

    def extract_features(self, bumpers=False, hard_stops=False, moved=False, shifted=False):
        # handle the bumper and hardstop thing

        print('extracting features - grouping big_df into research_dfa file')
        features = ['Vertical', 'Radial', 'Forward', 'Speed']
        self.research_dfa = self.big_df.groupby('time_sec')[features].mean() \
            .join(self.big_df.groupby('time_sec')[features].std(), rsuffix='_std') \
            .join(self.big_df.groupby('time_sec')[features].max(), rsuffix='_max') \
            .join(self.big_df.groupby('time_sec')[features].min(), rsuffix='_min') \
            .join(self.big_df.groupby('time_sec')['cat_id'].max())
        if bumpers:
            self.research_dfa = self.research_dfa.join(self.big_df.groupby('time_sec')['bumper_on'].max())
        if hard_stops:
            self.research_dfa = self.research_dfa.join(self.big_df.groupby('time_sec')['hard_stop_on'].max())
        if shifted or moved:
            self.research_dfa = self.research_dfa.join(self.research_dfa.shift(-1), rsuffix='_shifted')\
                .join(self.research_dfa.shift(1), rsuffix='_moved')
        self.research_dfa = self.research_dfa.fillna(0)

    def shift_dataset(self):
        # add previus and next second to feautres, result in x*3 features
        self.research_dfa = self.research_dfa.join(self.research_dfa.shift(-1), rsuffix='_shifted').join(research_dfa.shift(1),rsuffix='_moved')
        self.research_dfa = self.research_dfa.fillna(0)

    def build_cont_dataset(self):
        # build datset of continues features
        self.research_dfb = self.research_dfa[self.research_dfa.cat_id < 4]

    def populate_bumpers(self):
        self.events_bumper = self.anot[self.anot.event == 'bumper']

        self.events_bumper['start time'] = pd.to_datetime(self.events_bumper['start time'])
        self.events_bumper['end time'] = pd.to_datetime(self.events_bumper['end time'])

        # necessary offset
        self.events_bumper.loc[self.events_bumper.file.isin(['Acc_Data_0205.xlsx', 'Acc_Data_0305.xlsx']), 'start time'] = \
        self.events_bumper.loc[self.events_bumper.file.isin(['Acc_Data_0205.xlsx', 'Acc_Data_0305.xlsx']), 'start time'] + pd.DateOffset(
                seconds=10)

        # up to 3.5 - ~?
        # up to 3.8 - ~ 154
        self.bumpers_list = []
        first_second_stop = []
        for row in self.events_bumper.iterrows():
            i = 0
            time = row[1]['start time']
            first_second_stop.append(time)
            # while time >= row[1]['start time'] and time<=row[1]['start time']+datetime.timedelta(0,1):
            for i in range(1, 3):
                self.bumpers_list.append(time)
                time = row[1]['start time'] + datetime.timedelta(0, i)
                i += 1

        # set bumper annotations
        self.big_df['bumper_on'] = 0
        self.big_df['cat_id'][(self.big_df.cat_id == 40)] = 4
        self.big_df['bumper_on'][(self.big_df.cat_id == 4) & (self.big_df.time_sec.isin(self.bumpers_list))] = 1
        self.big_df['cat_id'][(self.big_df.cat_id == 4) & (self.big_df.time_sec.isin(self.bumpers_list))] = 40
        sum(self.big_df['bumper_on']), sum(self.big_df[self.big_df['cat_id'] == 40]['bumper_on'])

    def popluate_slight_tow(self):
        self.events_slight_tow = self.anot[(self.anot.event == 'tow') & (self.anot.file == 'Acc_Data_Tow_1605')]
        # fit date time format. first workout hard stops
        self.events_slight_tow['start time'] = pd.to_datetime(self.events_slight_tow['start time'])
        self.events_slight_tow['end time'] = pd.to_datetime(self.events_slight_tow['end time'])

        # add slight_tow column to research dataframe
        self.research_dfa['slight_towing'] = 0
        for row in self.events_slight_tow.iterrows():
            self.research_dfa['slight_towing'][(self.research_dfa.index.to_datetime() > row[1]['start time']) &
                                               (self.research_dfa.index.to_datetime() < row[1]['end time']) & (
                                                       self.research_dfa.cat_id == 6)] = 1

    def populate_tow(self):
        pass

    def populate_hard_stop(self):
        pass

from algorithms import *
import warnings
import click
from click import option as opt

warnings.filterwarnings("ignore")

# necessary options:
@click.command()
@click.option('--dest', default='towing', help='standard(default, drive/dirt road/zigzag), bumpers, towing(standard towing, slight_towing)')
@click.option('--source', default='saved', help='the .csv or the excels')
def main(dest, source):
    # I start here with the slight tow predictor

    config = json.load(codecs.open('config.json', 'r', 'utf-8-sig'))
    root_dir = config['root_dir']
    f = glob.glob(root_dir + '/data/*.xlsx')
    # f=[file for file in f if 'stand' in file]
    # f = [file for file in f if 'stand' in file or 'Tow' in file]

    loader = DataLoader()

    loader.load_data(f, source) # test loads fewer sheets, although all Excel file is still loaded
    #loader.load_saved_data()

    loader.populate_bumpers()
    loader.extract_features(bumpers=True, moved=True, shifted=True)

    loader.popluate_slight_tow()  # TODO: move research_dfa out of this function
    # loader.populate_events()

    pred_features = get_pred_features(shift=True, moved=True)

    # possible dest: bumper_on, standard, slight_towing, towing
    if dest == 'towing':  # t
        mean_crossing(loader.big_df)
    else:
        select_model(loader.research_dfa, model_names=['rf', 'ada', 'et'], features=pred_features, dest=dest)


if  __name__=='__main__':
    main()


