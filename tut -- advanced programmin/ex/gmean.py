#geometric mean --
#https://en.wikipedia.org/wiki/Geometric_mean

from math import sqrt
import numpy as np
from scipy.stats.mstats import gmean

print 'GM:\t' + str(sqrt(3 * 4))
print 'GM:\t' + str(gmean(np.array([3,4])))
