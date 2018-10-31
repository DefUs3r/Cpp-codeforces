#include <bits/stdc++.h>
using namespace std;
int n,m,MAX1=0,MAX2=0;
int ar[int(1e2+5)];
int main()
{
	cin >> n >> m;
	for (int i=0; i<n; i++)
	{
		cin >> ar[i];
		MAX1=max(MAX1,ar[i]);
	}
	MAX1+=m;
	for (int i=0; i<m; i++)
	{
		int MIN1=int(1e6+5),MIN_pos=0;
		for (int j=0; j<n; j++)
			if (ar[j]<MIN1)MIN1=ar[j],MIN_pos=j;
		ar[MIN_pos]++;
	}
	for (int i=0; i<n; i++)
		MAX2=max(MAX2,ar[i]);
	cout << MAX2 << " " << MAX1 << endl;
}