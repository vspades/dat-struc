#swap values

#method1: using <tmp>
def _swap(arg1, arg2):
	tmp = arg1
	arg1 = arg2
	arg2 = tmp
	return [arg1, arg2]

#method2: using <arithmetic>
def _diff(arg1, arg2):
	arg1 = arg1 + arg2
	arg2 = arg1 - arg2
	arg1 = arg1 - arg2
	return [arg1, arg2]

a = 1
b = 0

v1 = [a, b]
print v1
v1 = _swap(a,b)
print v1

print ''

v1 = [a, b]
print v1
v1 = _diff(a,b)
print v1
