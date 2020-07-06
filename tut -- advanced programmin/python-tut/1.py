# fast but vivid

vv = [1, 2, 3, 4]

f = lambda x: x + 1
print map(f, vv)

f = lambda x: x > 2
print map(f, vv)
print filter(f, vv)

f = lambda x, y: x + y
print reduce(f, vv)
