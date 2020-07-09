In [31]: vv = [1,2,3,4]

In [32]: f=lambda x: x + 1

In [33]: map(f, vv)
Out[33]: [2, 3, 4, 5]

In [34]: f=lambda x: x > 2

In [35]: map(f, vv)
Out[35]: [False, False, True, True]

In [36]: filter(f, vv)
Out[36]: [3, 4]

In [37]: f=lambda x, y: x + y

In [38]: reduce(f, vv)
Out[38]: 10
