#indices of minimum element(s)

import numpy as np

v = np.random.randint(-8, 8, size=100).reshape(10, 10)
print v

_min = v.min()
i, j = np.where(v == _min)

c = 0
while(c < len(i)):
	print str(_min) + ': (' + str(i[c]) + ',' + str(j[c]) + ')'
	c += 1
