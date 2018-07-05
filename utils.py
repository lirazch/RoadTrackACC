import pandas as pd
import numpy as np
import glob
from sklearn_porter import Porter
import datetime
import json
import codecs
import itertools
from xgboost import XGBClassifier
import warnings
import click
from click import option as opt
# data flow 1

import os, sys
import pickle
ROOT_DIR = os.path.abspath("../")
sys.path.append(ROOT_DIR)
warnings.filterwarnings("ignore")

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
def port_model(model, name="rf_from_sklearn"):
    if isinstance(model, XGBClassifier):
        model._Booster.save_model(name)
    else:
        porter = Porter(model, language='c')
        output = porter.export(embed_data=True)
        name = name+'.cpp'
        with open(name, "w") as text_file:
            text_file.write(output)

    statinfo = os.stat(name)
    print(bcolors.OKBLUE+f'model {name} saved, with size {statinfo.st_size} in bytes: '+bcolors.ENDC)

def save_pickle(fname, obj):
    with open(fname, "wb") as output_file:
        pickle.dump(obj, output_file)

def load_pickle(fname):
    with open(fname, "rb") as input_file:
        return pickle.load(input_file)

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





