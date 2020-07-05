from sys import argv
from os import system

v1 = argv[1]
v2 = argv[2]

v3 = v1.split('.')
v4 = v2.split('.')

if (len(v3) != 2):	v1 = v1 + '.0'
if (len(v4) != 2):	v2 = v2 + '.0'

v3 = v1.split('.')
v4 = v2.split('.')

def read_f(arg1):
	fh = open(arg1)
	v5 = fh.readline()
	fh.close()
	system('rm ' + arg1)
	return v5

system('python isum.py ' + v3[1] + ' '+ v4[1] + ' > tmp')
v5 = read_f('tmp')[:-1]

system('python isum.py ' + v3[0] + ' '+ v4[0] + ' > tmp')
v9 = read_f('tmp')[:-1]

v6 = max(len(v3[1]), len(v4[1]))
if(len(v5) > v6):
	system('python isum.py ' + v9 + ' '+ v5[0] + ' > tmp')
	v9 = read_f('tmp')[:-1]
	v5 = v5[1:]

print v9 + '.' + v5
