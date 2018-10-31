#include <bits/stdc++.h>
using namespace std;
long long ar[int(1e5+2)],df[int(1e5+2)],sgn[int(1e5+2)],sum[int(1e5+2)], tmp[int(1e5+2)];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;long long m;
	cin >> n >> m;
	for (int i=1; i<=n; i++)
	{
		cin >> ar[i];
	}
	ar[n+1]=m;
	for (int i=0; i<=n; i++)
	{
		df[i]=ar[i+1]-ar[i];
		if (i%2) sgn[i]=0;
		else sgn[i]=1;
	}
	for (int i=0; i<=n; i++)
	{
		if (i==0) tmp[i]=df[0];
		else
		{
			tmp[i]=tmp[i-1]+df[i]*sgn[i];
			sum[i]=sum[i-1]+df[i]*(1-sgn[i]);
		}
	}
	int mAx=tmp[n];
	for (int i=0; i<=n; i++)
	{
		if (df[i]==1)continue;
		int left=(i==0?0:tmp[i-1]);
		int right=sum[n]-sum[i];
		int pos=left+right+df[i]-1;
		mAx=max(mAx,pos);
	}
	cout << mAx;
}