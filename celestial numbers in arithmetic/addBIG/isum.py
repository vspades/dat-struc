from sys import argv

v1 = argv[1][::-1]
v2 = argv[2][::-1]

v3 = len(v1)
v4 = len(v2)

v5 = max(v3, v4)
if(v3 < v5):
	v6 = v5 - v3
	for i in range(v6):
		v1 += '0'
if(v4 < v5):
	v6 = v5 - v4
	for i in range(v6):
		v2 += '0'

#v7: sum
v7 = 0
#v8: carry
v8 = 0
#v9: result to display
v9 = ''

for i in range(v5):
	v7 = int(v1[i]) + int(v2[i]) + v8
	v9 = v9 + str(v7 % 10)
	v8 = v7 / 10
if(v8 != 0):
	v9 = v9 + str(v8)

print v9[::-1]
