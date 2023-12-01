
from __future__ import print_function 
import torch 
import pandas as pd 
import torch.nn as nn 
from torch.utils.data import random_split, DataLoader, TensorDataset 
import torch.nn.functional as F 
import numpy as np 
import torch.optim as optim 
from torch.optim import Adam



x=torch.rand(2, 3) 

print(x) 

# Loading the Data
df = pd.read_excel(r'C:\Users\Camelot\Documents\pytorching\PythonApplication1\Iris_dataset.xlsx') 
print('Take a look at sample from the dataset:') 
print(df.head()) 

# Let's verify if our data is balanced and what types of species we have  
print('\nOur dataset is balanced and has the following values to predict:') 
print(df['Iris_Type'].value_counts()) 