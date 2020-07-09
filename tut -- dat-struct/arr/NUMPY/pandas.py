import numpy as np
import pandas as pd

v = [1,2,3,4]
v = np.array(v)
v = pd.Series(v)
v.to_csv('stk.csv')
v = read_csv('stk.csv')

len(v.index)
len(v.columns)
v.values

v[1]		#column 1
v[[1,20]]	#column 1,20

v[1][:4]	#first 4 row(s) of 1st column

v[(v[1] > 0) & (v[1558] =='ad.')][[1,2,3,1558]].head(4)

In [95]: v = range(10000000)

In [96]: v = np.array(v)

In [97]: v
Out[97]: array([      0,       1,       2, ..., 9999997, 9999998, 9999999])

In [98]: v[:] = [random() * 10 for i in range(10000000)]

v['last_col'] = 0
v.columns

v=v.drop('last_col', 1)
v.columns

l = list(v[1558].drop_duplicates())

w = v[1558] == 'ad.'
list(w)
v.loc[w, 1558] = 1	#use loc otherwise itll apply on a copy of the df




