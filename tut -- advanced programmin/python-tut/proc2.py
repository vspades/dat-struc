from os import system as s
from os.path import getsize
from os.path import isdir
from os.path import exists
from sys import argv
from sys import exit
from random import random
from magic import Magic
from glob import glob

#check file-size
def check_size(arg1, arg2):
	#quiet
	try:		q = argv[arg2]
	except:	q = ''
	msg = 'File-Size exceeds 10MB. It will take a considerable time.' + \
	'\nProceed? [y|N]: '
	while(True and q != '-q'):
		# exceeds 10MB
		if	getsize(argv[arg1]) > 10485760:
			ans = raw_input(msg)
			if	ans == '' or ans == 'N':
				print 'Terminated by user.',
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

#	get directory
def get_dir(arg1):
	if	isdir(arg1):
		if	arg1[-1] == '/':	return arg1[:-1]
		else:									return arg1
	else:
		print 'not a directory!',

#	get file-type
def ftype(arg1):
	if isdir(arg1):
		d = get_dir(arg1)
		lst = ls(d + '/*')
		v = []
		for i in lst:	v.append(ftype(i))
		return v
	return Magic(mime=True).from_file(arg1)

#	get list of file(s)
def ls(arg1):
	return glob(arg1)
