#matrix product

import numpy as np
from scipy.sparse import csr_matrix

a = np.array([[1, 0],
							[0, 1]])
b = np.array([[4, 1],
							[2, 2]])
print np.matmul(a,b)
