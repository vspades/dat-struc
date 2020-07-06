from sys import argv, exit
from random import randint

try:
	v1 = argv[1]
	v2 = ""

	for i in v1:
		      rand = randint(32, 65)
		      v2 += chr(rand)
	print v1
	print v2

except:
	print ''
	exit()

#> python enc_dec_src.py "The quick brown fox jumps over the lazy dog."
