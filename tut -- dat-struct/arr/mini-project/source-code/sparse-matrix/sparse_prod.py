#sparse matrix product

import numpy as np
from scipy.sparse import csr_matrix
from scipy import sparse

a = np.arange(1, 7).reshape(2, 3)
print a
b = np.arange(1, 7).reshape(3, 2)
print b

print np.matmul(a,b)

print ''

sa = csr_matrix(a)
print(sa)

print ''

sb = csr_matrix(b)
print(sb)

print ''

print sparse.kron(sa, sb).toarray()
