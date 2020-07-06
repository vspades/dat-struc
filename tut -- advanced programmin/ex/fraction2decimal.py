from sys import exit

try:
	print 'convert a fraction to a decimal'
	print '-------------------------------'
	#v1: num
	v1 = raw_input('numerator of fraction:\t\t')
	try:
		v1 = int(v1)
	except:
		v1 = 0

	#v2: denum
	v2 = raw_input('denominator of fraction:\t')
	try:
		v2 = int(v2)
	except:
		v1 = 1

	#v3: value of fraction as decimal
	#convert fraction to decimal
	v3 = float(v1) / v2

	print ''
	print '%i/%i = %0.2f' % (v1, v2, v3)
except:
	print ''
	exit()
