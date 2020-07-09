import numpy as np

v = np.random.randint(-8, 8, size=100).reshape(10,10)
print v;	print ''
#sort each of them 10 rows
v[0:10].sort()
print v
