def f5(arg1):
	_max = max(arg1)
	_len = len(arg1)
	print arg1, _max, _len
	w = float(_max) / (_len + 1)
	print w

	for i in arg1:
		print str(i) + '\t|' + (int(i / w) * '*')
