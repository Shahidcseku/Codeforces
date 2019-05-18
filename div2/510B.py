import string

vitamin = {}

n = input()
for i in range(int(n)):
	a=input()
	b=a.split(' ')
	k = sorted(b[1])
	key = ""
	for i in range(len(k)):
		key += k[i]

	if key in vitamin:
		# print(vitamin[key]+" fdasf")
		if(int(vitamin[key])>int(b[0])):
			vitamin[key] = b[0]
	else:
		vitamin[key] = b[0]
	# endif
# endfor
# print(vitamin)
if 'A' in vitamin and 'B' in vitamin and 'C' in vitamin:
	s1 = int(vitamin['A'])+int(vitamin['B'])+int(vitamin['C'])
else:
	s1 = 900000
if 'AB' in vitamin and 'C' in vitamin:
	s2 = int(vitamin['AB'])+int(vitamin['C'])
else:
	s2 = 900000
if 'AC' in vitamin and 'B' in vitamin:
	s3 = int(vitamin['AC'])+int(vitamin['B'])
else:
	s3 = 900000
if 'BC' in vitamin and 'A' in vitamin:
	s4 = int(vitamin['BC'])+int(vitamin['A'])
else:
	s4 = 900000
if 'AB' in vitamin and 'AC' in vitamin:
	s5 = int(vitamin['AB'])+int(vitamin['AC'])
else:
	s5 = 900000
if 'AB' in vitamin and 'BC' in vitamin:
	s6 = int(vitamin['AB'])+int(vitamin['BC'])
else:
	s6 = 900000
if 'BC' in vitamin and 'AC' in vitamin:
	s7 = int(vitamin['BC'])+int(vitamin['AC'])
else:
	s7 = 900000
if 'ABC' in vitamin:
	s8 = int(vitamin['ABC'])
else:
	s8 = 900000

List = [s1,s2,s3,s4,s5,s6,s7,s8]
M = min(List)

if(M==900000):
	print("-1")
else:
	print(M)