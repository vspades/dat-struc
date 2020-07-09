def f4(arg1):
	if len(arg1) <= 8:
		c = 0
		for i in arg1:
			print 'temp(' + str(c + 1) + '). ' + str(i)
			c += 1
	else:
		print 'vector is too large to display!'

	print ''

	print	'max: ' + str(max(arg1))
	print	'min: ' + str(min(arg1))
	print	'avg: ' + str(sum(arg1) / len(arg1) * 1.0)
