#https://docs.scipy.org/doc/numpy/user/quickstart.html
#https://pandas.pydata.org/pandas-docs/stable/getting_started/10min.html#getting-data-in-out

import numpy as np
import pandas as pd
import random
import sys

#list vs. array --
#list
v = [6, 7, 8]
print v
print type(v)
#array
v = np.array(v)
print v
print type(v)
#convert list(mixture of data-types) to homogeneous(same data-types)
v = [1, 2, 4, 3]
v = np.array(v, dtype='complex')
print v

#create array --
#1. sequence-interval
print np.arange(4)
print np.arange(10, 30, 5)
print np.arange(0, 2, 0.2)
print np.linspace(0, 2, 8)
#2. init array and assign single value
v = np.empty(4)
v[:] = 5
print v
#tricky
v = np.empty(4)
v[:] = np.sin(np.pi / 2)
print v
#even more tricky
v = np.empty(4)
v[:] = round(100 * random.random())
print v
#3. init array and assign a list of values
v = np.empty(4)
v[:] = np.array([1, 2, 4, 3])
print v
#challenging
v = np.empty(4)
v[:] = np.random.randint(50, size=4)
print v
#4.	build array in another language (ex. C),
#		upload the array via file to Python:
#1.	load numpy-array from Python (ultra-fast but non-portable)
v = np.load('my_arr.npy')
print v
#2.	load from C (fast but portable)
df = pd.read_csv('vector.txt', header=None)
v = df[0].to_numpy()
print v

#Now we got our array, what do we know about it --
v = np.arange(6)
print v

print v
print v.ndim
print v.shape
print v.dtype
print v.itemsize
print v.size
print type(v)

#operation on arrays --

a = np.array(6).reshape(2,3)
b = np.array(10, 16).reshape(2,3)

print a * 2
print a ** 2
print a - b
print 10 * np.sin(a)
print a.max()
print a < 4
#in case things get tricky,
#solve the problem in another language (ex. C),
#ship the result array to Python via method 4 and 5, mentioned earlier.

#get/set element(s) --
a = np.array(12)
#index
print a
print a[2]
print a[-1]
#slice
print a[2:6]
#multi-dim
a.shape = (3,4)
print a
print [1:2, 2:4]
#manipulate
a[1:2, 2:4] = 0
print a
#flattened
a = a.ravel()
a[0:6:2] = -1000
#reversed a
a[::-1]
#avoid using explicit-for, as it decrease the run-time:
for i in a:
	print(i**(1/3.))
print a
#in case things get tricky,
#solve the problem in another language (ex. C),
#ship the result array to Python via method 4 and 5, mentioned earlier.

#THE FOLLOWING NEEDS TO GET APPROVED..
#v = [1, 2, 3]
#v = np.array(v)
#np.save('my_arr.npy', v)

#be careful -- memory usage could get stalled !
#v = np.arange(10000)
#print v
#np.set_printoptions(threshold=sys.maxsize)
#print v
#v = np.arange(10000)
#np.set_printoptions(threshold=sys.maxsize)
#fh=open('tmp', 'wb');	fh.write(v);	fh.close()

#REF:
#https://stackoverflow.com/questions/28439701/how-to-save-and-load-numpy-array-data-properly

#def f(x,y):
#    return 10*x+y
#b = np.fromfunction(f,(5,4),dtype=int)
#b
