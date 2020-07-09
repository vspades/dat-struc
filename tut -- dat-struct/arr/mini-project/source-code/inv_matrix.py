#inverse of a 4-element matrix

import numpy as np

# input
v = [11, 3, 56, -1]
v = np.array(v).reshape(2,2)

# HOW-TO
D = (v[0][0] * v[1][1]) - (v[0][1] * v[1][0])
D = D + 0.0

v_inv =	[
				(v[1][1] / D),
				- (v[0][1] / D),
				- (v[1][0] / D),
				(v[0][0] / D),
				]

v_inv = np.array(v_inv).reshape(2,2)
print v_inv

# built-in method
print np.linalg.inv(v)
