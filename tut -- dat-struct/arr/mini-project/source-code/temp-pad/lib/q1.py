def f1():
	v = 'enter 8 temperatures, one at a time. [(c)ancel]'
	print v
	print len(v) * '-'

	v = []
	c = 1
	while	c < 9:
		try:
			inp = raw_input('temp-' + str(c) + ': ')
			if	inp == 'c':
				break
			inp = float(inp)
			v.append(inp)
			c += 1
		except:
			print 'not a number!'

	return v
