x = 1.0
y = 0.9
x - y

from sympy import *
x, y = symbols("x y")
expr = x - y
expr.subs([(x, 1.0), (y, 0.9)])
