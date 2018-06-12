import gspread
from oauth2client.service_account import ServiceAccountCredentials

def gdrive_try():
    # use creds to create a client to interact with the Google Drive API
    scope = ['https://spreadsheets.google.com/feeds']
    creds = ServiceAccountCredentials.from_json_keyfile_name(
        '/home/gidi/nbs/RoadTrackACC/data/compute-5-6-18-d673ccb8cbc8.json', scope)
    client = gspread.authorize(creds)

    # Find a workbook by name and open the first sheet
    # Make sure you use the right name here.
    sheet = client.open("Roadtrack_tags").sheet1

    # Extract and print all of the values
    list_of_hashes = sheet.get_all_records()
    print(list_of_hashes)

import json
import codecs
import glob
from utils import DataLoader
from utils import *

def test_all_models():
    config = json.load(codecs.open('config.json', 'r', 'utf-8-sig'))
    root_dir = config['root_dir']
    f = glob.glob(root_dir + '/data/*.xlsx')
    # f=[file for file in f if 'stand' in file]
    # f = [file for file in f if 'stand' in file or 'Tow' in file]
    loader = DataLoader()
    source='excel'
    for dest in ['standard','bumper']:

        loader.load_data(['data/Acc_Data_070618.xlsx','data/Acc_Data_Tow_1605.xlsx'], source)  # test loads fewer sheets, although all Excel file is still loaded
        # files for (slight) towing 'data/Acc_Data_Tow_1605.xlsx', 'data/standStillDownHill.xlsx', 'data/standStillFlat.xlsx', 'data/standStillUphill.xlsx','data/Acc_Data_060618.xlsx'
        # files for driving
        loader.populate_events('bumper', 4)
        loader.extract_features(bumpers=True, moved=True, shifted=True)

        if dest == 'slight_towing':
            loader.popluate_slight_tow()  # TODO: move research_dfa out of this function
        # loader.populate_events()

        pred_features = get_pred_features(shift=True, moved=True)

        print(f'data distribution {Counter(loader.research_dfa.cat_id)}')
        print(f'dest distribution {Counter(loader.research_dfa[dest])}')
        # possible dest: bumper_on, standard, slight_towing, towing
        if dest == 'towing':  # t
            print('Running towing algorithms')
            mean_crossing(loader.big_df)
        else:
            select_model(loader.research_dfa, model_names=['rf', 'ada', 'et'], features=pred_features, dest=dest)