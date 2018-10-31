#include <bits/stdc++.h>
using namespace std;
int n,x;
long long ar[int(1e6+5)];
long long freq[int(1e6+5)];
int main()
{
	cin >> n >> x;
	for (int i=0; i<n; i++)
	{
		cin >> ar[i];
		freq[ar[i]]++;
		if (freq[ar[i]]>1)
		{
			cout << 0;
			return 0;
		}
	}
	int ans=-1;
	for (int i=0; i<n; i++)
	{
		freq[ar[i]]--;
		freq[ar[i]&x]++;
		if (freq[ar[i]&x]>1) ans=2;
	}
	for (int i=0; i<n; i++)
	{
		freq[ar[i]&x]--;
		freq[ar[i]]++;
		if (freq[ar[i]]>1){ans=1; break;}
		freq[ar[i]]--;
		freq[ar[i]&x]++;
	}
	cout << ans;
}