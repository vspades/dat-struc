import pandas as pd
import numpy as np

v1 = [1, 1, 2, 3, 4, 5, 5, 5, 6, 7]

def ft(arg1):
	df = pd.DataFrame(arg1)
	ft = df[0].value_counts()
	# ft: frequency-table
	# ft.index: observation-set
	# ft.values: frequency
	return ft, np.array(ft.index), np.array(ft.values)

# display frequency-table:
print ft(v1)[0]
