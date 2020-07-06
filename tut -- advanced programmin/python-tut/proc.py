from os.path import getsize
from sys import argv
from sys import exit

#check file-size
def check_size(arg1, arg2):
	#quiet
	try:		q = argv[arg2]
	except:	q = ''
	msg = 'File-Size exceeds 10MB. The prcedure may take a considerable time.' + \
	'\nProceed? [y|N]: '
	while(True and q != '-q'):
		# exceeds 10MB
		if	getsize(argv[arg1]) > 10485760:
			ans = raw_input(msg)
			if	ans == '' or ans == 'N':
				print 'Terminated bu user.',
				exit()
			elif	ans == 'y':
				break
			else:
				pass
		else:
			break

#	elicit full-name: (file-name + extension)
def fname(arg1):
	ext = arg1.split('.')[-1]
	rest = arg1.split('.')[:-1]
	rest2 = ""
	for i in rest:	rest2 += i + '.'
	fname = rest2[:-1]
	return (fname, ext)
