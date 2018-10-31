#include <bits/stdc++.h>
using namespace std;
map <string, int> m;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,ans=0;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		string s;
		cin >> s;
		m[s]++;
	}
	for (int i=0; i<n; i++)
	{
		string s;
		cin >> s;
		m[s]--;
	}
	for (map <string, int>:: iterator j=m.begin(); j!=m.end(); j++)
	{
		if ((*j).second>0)ans+=(*j).second;
	}
	cout << ans << endl;
}