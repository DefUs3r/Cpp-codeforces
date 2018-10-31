#include <bits/stdc++.h>
using namespace std;
int c[int(1e5+5)],p[int(1e5+5)];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int res=1;
	int n;
	cin >> n;
	for (int i=2; i<=n; i++)
		cin >> p[i];
	for (int i=1; i<=n; i++)
		cin >> c[i];
	for (int i=2; i<=n; i++)
		res+=c[i]!=c[p[i]];
	cout << res << endl;
}