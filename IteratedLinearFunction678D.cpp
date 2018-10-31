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
    cin.tie(NULL);
    long long a,b,n,x;
    cin>>a>>b>>n>>x;
    if (a==1)
    {
    	cout<<((x%p)+((n%p)*(b%p))%p)%p<<endl;
    }
    else
    {
    	cout<<((powmod(a,n,p)%p*(x%p))%p+((b%p)*((powmod(a,n,p)-1)%p)%p)*(powmod(a-1,p-2,p)%p))%p<<endl;//by Fermat's theorem => pow(b,-1) mod p=pow(b,p-2) mod p.
    }
    return 0;
}