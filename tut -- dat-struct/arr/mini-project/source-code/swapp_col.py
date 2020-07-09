#swapp columns

import numpy as np

#create matrix
v = np.random.randint(-8, 8, size=36).reshape(6,6)
#display matrix
print v
#swapp col 4th with col 6th:
v[:, [3,5]] = v[:, [5,3]]

#display altered matrix
print ''
print v
