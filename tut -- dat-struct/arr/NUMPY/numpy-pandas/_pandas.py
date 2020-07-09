import numpy as np
import pandas as pd

#create data-frame
# 1. grouping arrays
v1 = np.arange(4)
v2 = np.arange(10.0, 14.0)
print v1
print v2
df = pd.DataFrame	({
										'col1': v1,
										'col2': v2
									})
print df
# 2.read from (ex. CSV, ...) file
df = pd.read_csv('sample.csv')
#df = pd.read_csv('sample.csv', header=None)
print df
print df['SID'].to_numpy()

#what do we know about this data-frame?
print df.dtypes
print df.head(2)
print df.tail(2)
print len(df.index)
print df.columns
print len(df.columns)
print df.describe()

#selection
print df['Name']
print df[1:3]
print df[['Name', 'Income']][1:3]

print df[df.Income > 5000][['Name', 'Income']]
print df[df.Income > 5000][['Name', 'Income']][:2]

df.apply(lambda x: x.max() - x.min())

s = pd.Series(np.random.randint(0, 7, size=10))
s.value_counts()

#https://pandas.pydata.org/pandas-docs/stable/user_guide/text.html#text-string-methods
print df[df['Name'].isin(['foo', 'bar'])]
In [5]: idx = pd.Index([' jack', 'jill ', ' jesse ', 'frank'])
In [6]: idx.str.strip()
Out[6]: Index(['jack', 'jill', 'jesse', 'frank'], dtype='object')
In [7]: idx.str.lstrip()
Out[7]: Index(['jack', 'jill ', 'jesse ', 'frank'], dtype='object')
In [8]: idx.str.rstrip()
Out[8]: Index([' jack', 'jill', ' jesse', 'frank'], dtype='object')

# copy
df2 = df.copy()

# set
df2['Income'][:2] = 4000
print df2

# NA
df1.dropna(how='any')
df1.fillna(value=5)
pd.isna(df1)
