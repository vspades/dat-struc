"""
text-style		text-color		background-color
----------		----------		----------------

No-Effect	0		Black		30		Black		40
Bold			1		Red			31		Red			41
Lighter		2		Green		32		Green		42
Italic		3		Yellow	33		Yellow	43
Underline	4		Blue		34		Blue		44
							Purple	35		Purple	45
							Cyan		36		Cyan		46
							White		37		White		47
"""

def paint_it(arg1=0, arg2=37, arg3=40, txt='default'):
	#arg1:	txt-style
	#arg2:	txt-color
	#arg3:	bg-color
	return	"\033[%i;%i;%im%s\033[m" % (arg1, arg2, arg3, txt)

print paint_it(1, 35, 47, txt='foo')
print paint_it(0, 32, 47, txt='foo')
print paint_it(txt='foo' + 'bar')
print paint_it(0, 31, 47, txt='foo')
