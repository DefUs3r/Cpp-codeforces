#include <bits/stdc++.h>
using namespace std;
#define ll long long int
double ar[int(5e3+5)],maxs[int(5e3+5)];
int main()
{
	int i,j,n,k;
	scanf("%d%d",&n,&k);
	for (i=0; i<n; i++){scanf("%lf",&ar[i]);}
	double tmp;
	for (i=k; i<=n; i++)
	{
		tmp=0;
		for(j=0; j<i; j++){tmp+=ar[j];}
		maxs[i]=tmp;
		for (j=1; j<=n-1; j++)
		{
			tmp-=ar[j-1];
			tmp+=ar[j+i-1];
			maxs[i]=max(maxs[i],tmp);
		}
		maxs[i]=maxs[i]/((double)i)*1.0;
	}
	tmp=maxs[k];
	for (i=k+1; i<=n; i++)
	{
		tmp=max(tmp,maxs[i]);
	}
	printf("%.10lf",tmp);
}