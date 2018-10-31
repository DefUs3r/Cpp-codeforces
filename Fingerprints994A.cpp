#include <bits/stdc++.h>
using namespace std;
int ar[11],fl[11];
int main()
{
	int n,m;
	cin >> n >> m;
	for (int i=0; i<n; i++)
	{
		cin >> ar[i];
	}
	for (int i=0; i<m; i++)
	{
		int x; cin >> x;
		for (int j=0; j<n; j++)
		{
			if (x==ar[j]){fl[j]=1;break;}
		}
	}
	for (int i=0; i<n; i++)
	{
		if (fl[i]) cout << ar[i] << " ";
	}
	cout << "\n";
}