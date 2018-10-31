#include <bits/stdc++.h>
using namespace std;
int n;
long long x,tmp;
long long gcd(long long a, long long b)
{
	while (a&&b)a>b?a%=b:b%=a;
	return a+b;
}
int main()
{
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		cin >> x;
		tmp=gcd(4*x,x+1);
		cout << 4*x/tmp+1 << endl;
	}
}