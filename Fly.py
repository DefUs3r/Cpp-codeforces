n = int(input())
m = int(input())
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]

tmp=1.0
for i in range(0,n):
	tmp*=((a[i]-1)*(b[i]-1))
	tmp/=a[i]
	tmp/=b[i]

if tmp == 0:
	print('-1\n')
	exit(0)

fuel = m*(1-tmp)/tmp

if fuel >= 1e-7:
	print(fuel)
else:
	print('-1\n')