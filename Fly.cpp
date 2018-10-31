#include <bits/stdc++.h>
using namespace std;
long long int n,a[int(1e3+3)],b[int(1e3+3)];
double m,f=1;
int main()
{
	cin >> n >> m;
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=0; i<n; i++)
		cin >> b[i];
	for (int i=0; i<n; i++)
	{
		f*=(a[i]-1)*(b[i]-1);
		f/=a[i];
		f/=b[i];
	}
	if (f==0){cout << "-1" << endl;return 0;}
	double tot = m*(1-f)/f;
	if (tot>=1e-7){cout << setprecision(12) << tot << endl;}
	else cout << -1;
}