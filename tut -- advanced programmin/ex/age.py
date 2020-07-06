from sys import exit

try:
	#v1: name
	v1 = raw_input("your name: ")

	#v2: age
	v2 = raw_input("your age: ")
	try:
		v2 = int(v2)
	except:
		pass

	if		v2 < 21:
		print "You young whippersnapper, " + v1 + "!"
	elif	v2 < 40:
		print v1 + ", you're still in your prime!"
	elif	v2 < 60:
		print "You're over the hill, " + v1 + "!"
	elif	v2 < 80:
		print "I bow to your wisdom, " + v1 + "!"
	else:
		print "Are you really " + str(v2) + ", " + v1 + "?"
except:
	print ''
	exit()
