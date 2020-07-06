#p: purchase
p = raw_input('Amount of purchase: ')
try:
	p = float(p)
except:
	p = 0

#r: rate
r = 0.065
#t: tax_amt
t = p * r
#tot: total
tot = p + t

print ''
#precision: 2
print 'Purchase\t= %0.2f'	% (p)
print 'Tax\t\t= %0.2f'		% (t)
print 'Total\t\t= %0.2f'	% (tot)
