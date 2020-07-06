#solve quadratic equation --
#https://en.wikipedia.org/wiki/Quadratic_equation

import math

print 'AX^2 + BX + C'

a = float(input('A: '))
b = float(input('B: '))
c = float(input('C: '))

d = (b ** 2) - (4 * a * c)

if		d < 0:
	print 'no root(s).'
elif	d == 0:
	x = (-b) / (2 * a)
	print 'root: ' + str(x)
else:
	x1 = (-b + math.sqrt(d)) / (2 * a)
	x2 = (-b - math.sqrt(d)) / (2 * a)

	print 'root1: ' + str(x1)
	print 'root2: ' + str(x2)
