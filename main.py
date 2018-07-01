
from dataloader import *

def main(dest='slight_towing', source='saved', validity=False, params = {'estimators': 5, 'max_depth': 10, 'features': 48}):

    # I start here with the slight tow predictor
    # instructions:
    # when predicting slight towing, need to supply files with (slight) towing, and standstill

    config = json.load(codecs.open('config.json', 'r', 'utf-8-sig'))
    root_dir = config['root_dir']
    f = glob.glob(root_dir + '/data/*.xlsx')

    loader = DataLoader(dest)
    loader.load_data(f, source)  # test loads fewer sheets, although all Excel file is still loaded
    # files for (slight) towing 'data/Acc_Data_Tow_1605.xlsx', 'data/standStillDownHill.xlsx', 'data/standStillFlat.xlsx', 'data/standStillUphill.xlsx','data/Acc_Data_060618.xlsx'

    loader.populate_events(dest, get_category(dest))

    loader.big_df.to_csv(f'saved_data/big_df_{dest}.csv')
    loader.extract_features(moved=True, shifted=True)

    if dest == 'slight_towing':
        loader.popluate_slight_tow()  # TODO: move research_dfa out of this function

    print(f'data distribution {Counter(loader.research_dfa.cat_id)}')

    model_selection = Model_Selection(validity=validity, params=params)
    # features: all -(48), 1 - 16
    # print(f'dest distribution {Counter(loader.research_dfa[dest])}')
    # possible dest: bumper_, standard, slight_towing, towing
    if dest == 'towing':  #
        print('Running towing algorithms')
        model_selection.mean_crossing(loader.big_df)
    elif dest in ['bumper', 'hard_stop', 'slight_towing']:
        model_selection.select_model(loader.research_dfa, model_names=['rf', 'et', 'xgb'], dest=dest
                                     , upsample=True, )
    else:
        model_selection.select_model(loader.research_dfa, model_names=['rf', 'et'], dest=dest)


if   __name__ == '__main__':
    main()