#include <bits/stdc++.h>
using namespace std;

long long p=1000000007;
long long int powmod(long long int x,long long int y, long long int m)
{
	long long int var;
	if (y==0)
		return 1;
	var=powmod(x,y/2,m);       
	if ((y%2)!=0)
		return ((((x*var)%m)*(var%m))%m)%m;
	else
	{
		return ((var%m)*(var%m))%m;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n,m,k,ans=1;
    cin>>n>>m>>k;
    if (k==-1 && n%2!=m%2)
    {
    	cout<<0;
    	return 0;
    }
    n--,m--;
    n%=p-1;
    m%=p-1;
    long long x=2,tmp=n*m;
    while(tmp)
    {
        if (tmp&1)ans=ans*x%p;
        x=x*x%p;
        tmp>>=1;
    }
    cout << ans << endl;
}