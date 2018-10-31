#include <bits/stdc++.h>
using namespace std;
int c[int(1e2+5)],chk[int(1e2+5)];
void vis(int start)
{
	chk[start]=1;
	for (int i=start; i<=c[start]; i++)
		if (chk[i]==0)vis(i);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for (int i=0; i<n; i++)
	{
		int a,b;
		cin >> a >> b;
		c[a]=max(c[a],b);
	}
	vis(0);
	if (chk[m]) cout << "YES";
	else cout << "NO";
}