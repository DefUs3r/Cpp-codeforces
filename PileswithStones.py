n=int(input())
x=list(map(int,input().split()))
y=list(map(int,input().split()))
sumx=sum(x)
sumy=sum(y)
if sumy>sumx:
	print('No')
else:
	print('Yes')