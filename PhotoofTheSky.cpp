#include <bits/stdc++.h>
using namespace std;
int n;
const int maxn=1e6+5;
long long ar[maxn];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i=0; i<2*n; i++)
		cin >> ar[i];
	sort(ar,ar+2*n);
	long long chk=(ar[n-1]-ar[0])*(ar[2*n-1]-ar[n]);
	for (int i=0; i<n; i++)
		chk=min(chk,(ar[2*n-1]-ar[0])*(ar[i+n-1]-ar[i]));
	cout << chk;
}