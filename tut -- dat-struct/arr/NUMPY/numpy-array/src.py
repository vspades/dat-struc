import numpy as np

v1 = [1, 2, 3, 4]
v1 = np.array(v1)
print v1
#save on disk
np.save('q', v1)
#load from disk -- npy
v2 = np.load('q.npy')
print v2

#from = 1, to = 10, step = 1
v1 = np.arange(1, 8)
print v1
#step = 2
v1 = np.arange(1, 8, 2)
print v1
#step = 1.5
v1 = np.arange(1, 8, 1.5)
print v1

#from = 1, to = 4, split-by = 7
v1 = np.linspace(1, 4, 7)
print v1

#slice
v1 = np.arange(1, 8)
#from = 2, to = 5
print v1[2:5]

#index -- starts from 0
print v1[[2, 5]]

#number of elements
print np.size(v1)

v1 = np.arange(1, 9)
print v1
#dimension
print v1.shape
v1.shape = (2,4)
print v1
#4th column
print v1[:,3]

#append
v1 = np.array([1, 2, 3])
v2 = np.array([4, 5, 6])
print np.hstack((v1, v2))
print np.hstack(([34], v1, [55, 66], v2, [-101]))
print np.vstack((v1, v2))
print np.vstack((v1, [9, 8, 7], v2))

#repetition
v1 = [1, 2, 3, 4]
v1 = v1 * 4
v1 = np.array(v1)
print v1

#operation
v1 = np.array([1, 2, 3])
print v1 * 2
print v1 ** 2
print v1 / 2
print v1 / 2.
