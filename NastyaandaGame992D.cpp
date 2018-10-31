#include <bits/stdc++.h>
using namespace std;
const long long int maxn=2e5+5;
int n,k;
bool fl;
long long ar[maxn],pos[maxn];
long long mul_chk(long long a, long long b)
{
	fl=false;
	if (log(a)+log(b)>log(3)+18*log(10))fl=true;
	return a*b;
}
bool div_chk(long long prod, long long sum)
{
	if (prod%sum==0 && prod/sum==k) return true;
	return false;
}
int main()
{
	long long cnt=0;
	cin >> n >> k;
	for (int i=0; i<n; i++){cin >> ar[i];}
	pos[n-1]=n;
	for (int i=n-2; i>=0; i--)
	{
		if (ar[i+1]==1) pos[i]=pos[i+1];
		else pos[i]=i+1;
	}
	for (int i=0; i<n; i++)
	{
		long long prod=1,sum=0;int nxt=i;
		while(true)
		{
			prod=mul_chk(prod,ar[nxt]);
			if (fl==true)break;
			sum += ar[nxt];
			if (div_chk(prod,sum)==true) cnt++;
			long long nxt_pos=pos[nxt];
			long long tmp=nxt_pos-nxt-1;
			if (prod%k==0)
			{
				long long chk=(prod/k)-sum;
				if (chk>0 && chk<=tmp)cnt++;
			}
			if (nxt_pos >= n)break;
			sum+=tmp;
			nxt=nxt_pos;
		}
	}
	cout << cnt << endl;
	return 0;
}