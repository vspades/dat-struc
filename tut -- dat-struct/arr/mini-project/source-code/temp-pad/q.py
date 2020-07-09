from os import system as s
from sys import exit
from sys import path

path.insert(0, './lib')

from q1 import f1
from q2 import f2
from q3 import f3
from q4 import f4
from q5 import f5

pad = []

try:
	while(True):
		s('clear')

		v = 'Temperature Plotting Program Menu'
		print v
		print len(v) * '-'
		print '(E)nter temperatures for scratchpad'
		print '(S)tore scratchpad to disk'
		print '(R)ead disk file to scratchpad'
		print '(T)able view of current data'
		print '(G)raph view of current data'
		print 'E(x)it the program'
		print ''

		v = raw_input('item: ')
		if	v == 'E' or v == 'e':
			s('clear')
			pad = f1()
			raw_input('\npress ENTER to continue...')
		if	v == 'S' or v == 's':
			s('clear')
			f2(pad)
			print 'scratchpad <pad.pkl> has been saved.'
			raw_input('\npress ENTER to continue...')
		if	v == 'R' or v == 'r':
			s('clear')
			pad = f3()
			print 'scratchpad <pad.pkl> has been loaded.'
			raw_input('\npress ENTER to continue...')
		if	v == 'T' or v == 't':
			s('clear')
			f4(pad)
			raw_input('\npress ENTER to continue...')
		if	v == 'G' or v == 'g':
			s('clear')
			f5(pad)
			raw_input('\npress ENTER to continue...')
		if	v == 'X' or v == 'x':
			print 'bye!'
			exit()
		else:
			pass
except:
	print ''
	exit()
