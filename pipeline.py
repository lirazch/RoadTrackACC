import pandas as pd
import numpy as np
import glob
from collections import Counter
from datetime import datetime
from matplotlib import pyplot as plt
import seaborn as sb
import datetime

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

import warnings

warnings.filterwarnings("ignore")

# add auto relaod

from utils import *
from detect_peaks import detect_peaks

from sklearn_porter import Porter


class Modeler:

    def __init__(self):
        pass

    def load_models(self):
        # multi layer perceptron - neural network
        mlp = MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(15, 10), random_state=1)
        lr = LogisticRegression()
        svc = svm.SVC(decision_function_shape='ovo')
        # tree based models
        et = ExtraTreesClassifier(n_estimators=15, random_state=0)
        base_estimator = DecisionTreeClassifier(max_depth=4, random_state=0)
        ada = AdaBoostClassifier(n_estimators=10, random_state=0)
        rf = RandomForestClassifier(n_estimators=50, max_depth=10, oob_score=True, random_state=1)
        
    def try_models(self, model_names=['lr','svc', 'mlp', 'random forest', 'ada', 'extra tree']):

        models = [lr, svc, mlp, rf, ada, et]

        for i, model in enumerate(models):
            results = []
            for samples_train, samples_test in kf.split(bumpers_df):
                # SVM is bit slower
                X_train, X_valid, y_train, y_valid = bumpers_df[pred_features].iloc[samples_train], \
                                                     bumpers_df[pred_features].iloc[samples_test] \
                    , bumpers_df.bumper_on[samples_train], bumpers_df.bumper_on[samples_test]
                model.fit(X_train, y_train)
                results.append(model.score(X_valid, y_valid))
            print(model_names[i], round(np.mean(results), 3), round(np.std(results), 3))