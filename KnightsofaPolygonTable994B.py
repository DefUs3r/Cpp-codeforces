a = map(int,raw_input().split())
s = map(int,raw_input().split())
d = map(int,raw_input().split())
y = [[s[i], d[i], i] for i in range(a[0])]
y = sorted(y)
ans = [0 for i in xrange(a[0])]
mx = []
if a[1] == 0:
	for i in d: print i,
else:

	for i in range(a[0]):
		if len(mx) < a[1]:
			mx.append(y[i][1])
			ans[y[i][2]] = sum(mx)
		else:
			ans[y[i][2]] = sum(mx) + y[i][1]
			if y[i][1] > mx[0]:
				mx.remove(mx[0])
				mx.append(y[i][1])
		mx = sorted(mx)
	for i in ans: print i