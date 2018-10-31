#include <bits/stdc++.h>
using namespace std;
const long long int mod=1e9+7;

long long int func(long long int a,long long int b)
{
	if (b==0) return 1;
	long long int tmp=func(a,b/2);
	if (b%2==0) return ((tmp*tmp)%mod+mod)%mod;
	else return ((a*(((tmp*tmp)%mod+mod)%mod))%mod+mod)%mod;
}

int main()
{
	long long int x,k;
	cin >> x >> k;
	if (x==0)
	{
		cout << "0" << endl;
		return 0;
	}
	if (k==0)
		cout << ((2*x)%mod+mod)%mod << endl;
	else
	{
		long long int tmp=((2*x-1)%mod+mod)%mod;
		cout << ((2*tmp*func(2,k-1)+1)%mod+mod)%mod << endl;
	}
	return 0;
}