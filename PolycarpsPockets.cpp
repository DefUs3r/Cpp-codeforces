#include <bits/stdc++.h>
using namespace std;
int ar[int(1e2+5)];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		ar[x]++;
	}
	int Max=-1;
	for (int i=1; i<=100; i++)
	{
		if (ar[i]>0)
		{
			Max=max(Max,ar[i]);
		}
	}
	cout << Max;
}