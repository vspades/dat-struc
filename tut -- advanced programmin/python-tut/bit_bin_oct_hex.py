print '(bit)wise operations'
print ''

print 'display a (dec)imal number in (bin)ary | (oct)al | (hex)adecimal format'
print '-----------------------------------------------------------------------'

a = 60	#	60:	0011	1100
b = 13	#	13:	0000	1101
c = 0		#	00:	0000	0000

print 'a:', a
print 'b:', b

print '-----------------------------------------------------------------------'
print '\t\tBIN\t\tOCT\tHEX'
print '-----------------------------------------------------------------------'

c = a & b
print '1. a AND b:\t%s\t\t%s\t%s'	%(bin(c),oct(c),hex(c))

c = a | b
print '2. a OR b:\t%s\t%s\t%s'	%(bin(c),oct(c),hex(c))

c = a ^ b
print '3. a XOR b:\t%s\t%s\t%s'	%(bin(c),oct(c),hex(c))

c = ~(a)
print '4. NOT a:\t%s\t%s\t%s'	%(bin(c),oct(c),hex(c))

c = a << 2
print '5. L_SHIFT a:\t%s\t%s\t%s'	%(bin(c),oct(c),hex(c))

c = a >> 2
print '6. R_SHIFT a:\t%s\t\t%s\t%s'	%(bin(c),oct(c),hex(c))
