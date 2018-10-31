#include <bits/stdc++.h>
using namespace std;
int n,m;
int freq[int(1e2+5)];
int main()
{
	cin >> n >> m;
	for (int i=0; i<m; i++)
	{
		int x;
		cin >> x;
		freq[x]++;
	}
	for (int i=1; ; i++)
	{
		int tmp=0;
		for (int j=1; j<=100; j++)
			tmp+=freq[j]/i;
		if (tmp<n)
		{
			cout << max(0,i-1) << endl;
			return 0; 
		}
	}
}