#d: dollar
d = raw_input('How many dollars did you get? [$]: ')
try:
	d = float(d)
except:
	pass

#b: bushel
b = raw_input('For how many bushels? [n]: ')
try:
	b = int(b)
except:
	pass

#r: rate --
#precision: 2
r = 0
try:
	r = d / b
except:
	pass

print 'You have received %0.2f for each bushel.' % (r)
