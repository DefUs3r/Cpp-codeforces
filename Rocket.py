from sys import stdout
max_dist,n=map(int, input().split())
store=[0]*n
def prt(arg):
	print(arg)
	stdout.flush()
	return int(input())
for i in range(n):
	ans=prt(1)
	if ans == 0:
		exit(0)
	elif ans == -2:
		exit(0)
	else:
		store[i] = ans
left=1
right=max_dist+1
pos=0
while right - left > 1:
	mid = left + (right - left)//2
	ans = prt(mid)
	if ans == 0:
		exit(0)
	elif ans == -2:
		exit(0)
	if ans * store[pos] < 0:
		right = mid
	else:
		left = mid
	pos += 1
	pos %= n
if prt(right) != 0:
	prt(left)