#include <bits/stdc++.h>
using namespace std;
const long long int maxn=2e5+5;
long long ar[maxn];
int main()
{
	long long int n,k;
	cin >> n >> k;
	for (int i=0; i<n; i++)
		cin >> ar[i];
	sort (ar, ar+n);
	ar[n]=int(1e7);
	long long int cnt=0,ptr=0;
	for (int i=0; i<n; i++)
	{
		while(ptr<n&&ar[i]==ar[ptr])ptr++;
		if (ar[ptr]>ar[i]+k)cnt++;
	}
	cout << cnt << endl;
}