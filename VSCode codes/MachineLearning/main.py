# YOUTUBE ADVIEW PREDICTION

import numpy as np
import pandas as pd
import matplotlib.cm as cm
import matplotlib.pyplot as pl

# Importing Data
# path = 'C:\Users\Aryan\Documents\Projects\CPP-Codes\VSCode codes\Machine Learning'
data_train = pd.read_csv(r"C:\Users\Aryan\Documents\Projects\CPP-Codes\VSCode codes\MachineLearning\train.csv")
# print(data_train.head())


data_train.shape
# (14999,9)

# Assigning each category (ABCDEFGH) a number for Category feature
category = { 'A':1, 'B':2, 'C':3, 'D':4, 'E':5, 'F':6, 'G':7, 'H':8 }
data_train['category'] = data_train['category'].map(category)
print(data_train.head())
