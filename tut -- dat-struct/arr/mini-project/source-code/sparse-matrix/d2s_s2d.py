from numpy import array
from scipy.sparse import csr_matrix

# create dense matrix
A = array([[1, 0, 0, 1, 0, 0], [0, 0, 2, 0, 0, 1], [0, 0, 0, 2, 0, 0]])
print(A)

# convert dense to sparse matrix (CSR method)
S = csr_matrix(A)
print(S)

# reconstruct dense matrix
A = S.todense()
print(A)
