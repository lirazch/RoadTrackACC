from utils import *
import json
from algorithms import *


class DataLoader:

    def __init__(self, dest):
        config = json.load(codecs.open('config.json', 'r', 'utf-8-sig'))
        path = '/home/gidi/nbs/RoadTrackACC/data/'
        anot_path = '/home/gidi/nbs/RoadTrackACC/annotations/'
        self.files = glob.glob(path+'*.xlsx')
        self.big_df = ''
        self.key_df = pd.read_csv(config['data_key_file'])
        self.anot = pd.read_csv(config['annotation_file'])
        self.dest = dest

    def load_data(self, files, source='excel', test=False, plot=False):
    #
    # load data from excel files.
    # input: list of files (glob can be used)
    # if test=1, no more than 3 sheets are loaded per file, to gain speed
        if source == 'excel':
            big_df = pd.DataFrame()

            for file_id in files:
                print(bcolors.OKBLUE+'Loading file:'+str(file_id)+bcolors.ENDC)

                excel = pd.ExcelFile(file_id)

                features = ['Vertical', 'Forward', 'Radial', 'Speed', 'Ignition', 'level_0']
                numeric_features = ['Vertical', 'Forward', 'Speed', 'Radial']

                for i, name in enumerate(excel.sheet_names):
                    try:
                        df = excel.parse(name, header=1)

                        df = df.reset_index()
                        df.columns = [column.replace(' ', '') for column in df.columns]
                        df[numeric_features] = df[numeric_features].apply(pd.to_numeric, errors='coerce')
                        df = df[features]  #
                        df.Vertical = df.Vertical + 240  # normalize veritcal Axis

                        df = df.set_index(pd.to_datetime(df['level_0'].astype(str).str.replace(']', '')))  # add more columns
                        df['file'] = file_id.split('/')[-1]
                        df['sheet'] = name
                        df['cat_id'] = self.get_category_from_file(file_id, name)

                        big_df = big_df.append(df)  # put it all in big_df

                        if plot:
                            df.resample('s').mean()[['Forward', 'Radial', 'Vertical', 'Speed']]\
                                .plot(title=name + ',' + file_id + ',' + str(get_category(name)), figsize=(16, 4))
                        if test == 1 and i > 3:
                            print(bcolors.OKBLUE+'break loader because test is 1'+bcolors.ENDC)
                            break
                    except:
                        print(f'error in sheet{name}')

            big_df['time_sec'] = pd.to_datetime(big_df.index.round('s'))  # add rounded second column
            self.big_df = big_df.dropna()

        elif source == 'saved':
            #
            # Load a saved big_df
            #
            file_name = f'big_df_{self.dest}.csv'
            today = pd.datetime.today().date()
            self.big_df = pd.read_csv('saved_data/'+file_name)
            self.big_df.level_0 = pd.to_datetime(self.big_df.level_0)
            self.big_df.level_0 = self.big_df.level_0.apply(lambda x: (x - (x.date() - today)))
            self.big_df.index = self.big_df.level_0
            self.big_df['time_sec'] = pd.to_datetime(self.big_df.index.round('s'))
            print(bcolors.OKBLUE + f'Loading {file_name} file:' + bcolors.ENDC)

        for column in self.big_df.columns:  # clear the level_0 column
            if 'level' in column:
                del self.big_df[column]

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

    def extract_features(self, moved=False, shifted=False):
        # handle the bumper and hardstop thing
        grouping = ['time_sec', 'file']
        print('extracting features - grouping big_df into research_dfa file')
        features = ['Vertical', 'Radial', 'Forward', 'Speed']
        self.research_dfa = self.big_df.groupby(grouping)[features].mean() \
            .join(self.big_df.groupby(grouping)[features].std(), rsuffix='_std') \
            .join(self.big_df.groupby(grouping)[features].max(), rsuffix='_max') \
            .join(self.big_df.groupby(grouping)[features].min(), rsuffix='_min') \
            .join(self.big_df.groupby(grouping)['cat_id'].max())
        if self.dest == 'bumper':
            self.research_dfa = self.research_dfa.join(self.big_df.groupby('time_sec')['bumper'].max())
        if self.dest =='hard_stop':
            self.research_dfa = self.research_dfa.join(self.big_df.groupby('time_sec')['hard_stop'].max())
        if shifted or moved:
            self.research_dfa = self.research_dfa.join(self.research_dfa.shift(-1), rsuffix='_shifted')\
                .join(self.research_dfa.shift(1), rsuffix='_moved')
        self.research_dfa = self.research_dfa.fillna(0)
        print('research dataframe (dfa) is ready')

    def shift_dataset(self):
        # add previus and next second to feautres, result in x*3 features
        self.research_dfa = self.research_dfa.join(self.research_dfa.shift(-1), rsuffix='_shifted').join(research_dfa.shift(1),rsuffix='_moved')
        self.research_dfa = self.research_dfa.fillna(0)

    def build_cont_dataset(self):
        # build datset of continues features
        self.research_dfb = self.research_dfa[self.research_dfa.cat_id < 4]

    # def populate_bumpers(self):
    #     self.events_bumper = self.anot[self.anot.event == 'bumper']
    #
    #     self.events_bumper['start time'] = pd.to_datetime(self.events_bumper['start time'])
    #     self.events_bumper['end time'] = pd.to_datetime(self.events_bumper['end time'])
    #
    #     # necessary offset
    #     self.events_bumper.loc[self.events_bumper.file.isin(['Acc_Data_0205.xlsx', 'Acc_Data_0305.xlsx']), 'start time'] = \
    #     self.events_bumper.loc[self.events_bumper.file.isin(['Acc_Data_0205.xlsx', 'Acc_Data_0305.xlsx']), 'start time'] + pd.DateOffset(
    #             seconds=10)
    #
    #     #self.events_bumper['start time']=self.events_bumper['start time'].dt.time
    #     # up to 3.5 - ~?
    #     # up to 3.8 - ~ 154
    #     self.bumpers_list = []
    #     self.big_df['bumpers'] = 0
    #     for row in self.events_bumper.iterrows():
    #         time = row[1]['start time']
    #         sheet = row[1]['sheet']
    #         file = row[1]['file']
    #         self.bumpers_list.append(time)
    #         for i in range(1, 3):
    #             self.bumpers_list.append(time)
    #             time = row[1]['start time'] + datetime.timedelta(0, i)
    #             i += 1
    #
    #     # set bumper annotations
    #
    #     self.big_df['bumpers'][(self.big_df.cat_id == 4) & (self.big_df.sheet == sheet)& (self.big_df.file == file) & (self.big_df.time_sec.isin(self.bumpers_list))] = 1

    def popluate_slight_tow(self):
        # populate slight towing. this can't be done in the standard event population because it uses the research dfa
        event = 'slight_towing'
        self.events_slight_tow = self.anot[(self.anot.event == 'tow')]
        # fit date time format. first workout hard stops
        self.events_slight_tow['start time'] = pd.to_datetime(self.events_slight_tow['start time'])
        self.events_slight_tow['end time'] = pd.to_datetime(self.events_slight_tow['end time'])

        # add slight_tow column to research dataframe
        self.research_dfa[event] = 0
        dfa_times = self.research_dfa.index.get_level_values('time_sec').to_datetime()  # self.research_dfa.index.to_datetime()
        for row in self.events_slight_tow.iterrows():
            # very slow :(( sometimes
            tow_time = row[1]

            self.research_dfa[event][(dfa_times > tow_time['start time']) &(dfa_times < tow_time['end time']) & (self.research_dfa.cat_id == 6)] = 1
        print(f'{event} count {Counter(self.research_dfa[event])}')

    def populate_events(self, event, cat_id):

        events = self.anot[self.anot.event == event]
        # fit date time format. first workout hard stops
        events['start time'] = pd.to_datetime(events['start time'])
        events['end time'] = pd.to_datetime(events['end time'])

        # necessary offset
        if event=='bumper':
            events.loc[events.file.isin(['Acc_Data_0205.xlsx', 'Acc_Data_0305.xlsx']), 'start time'] = \
            events.loc[events.file.isin(['Acc_Data_0205.xlsx', 'Acc_Data_0305.xlsx']), 'start time'] + pd.DateOffset(seconds=10)

        event_list = []
        first_second_stop = []

        for row in events.iterrows():
            i = 0
            time = row[1]['start time']
            first_second_stop.append(time)

            while time >= row[1]['start time'] and time <= row[1]['end time']:
                event_list.append(time)
                time = row[1]['start time'] + datetime.timedelta(0, i)
                i += 1

        self.big_df[event] = 0
        df_times = pd.to_datetime(self.big_df.time_sec)  # self.research_dfa.index.to_datetime()
        print(f'populating {event} events')
        for row in events.iterrows(): # might be a bit slow
            self.big_df[event][(self.big_df.cat_id == cat_id) & (df_times >= row[1]['start time']) & (
                    df_times <= row[1]['end time']) & (self.big_df.file == row[1]['file'])] = 1
        print(f'{event} count {Counter(self.big_df[event])}')