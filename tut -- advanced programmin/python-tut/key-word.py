import pandas as pd
import numpy as np

# returns freq-table
def ft(arg1):
	df = pd.DataFrame(arg1)
	ft = df[0].value_counts()
	# ft: frequency-table
	# ft.index: observation-set
	# ft.values: frequency
	return ft, np.array(ft.index), np.array(ft.values)

def kword(arg1):
	c = ft(arg1)[0]
	c = c / max(c) * 100
	c = c.round()
	# returns least-freq (key-word)
	return np.array(c[c <= c.mean()].index)

v1 = [1, 1, 2, 3, 4, 5, 5, 5, 6, 7]
v2 = ['foo', 'foo', 'bar']

print v1
print kword(v1)

print ''

print v2
print kword(v2)
