#include <bits/stdc++.h>
#include <cassert>
using namespace std;
const int maxn=2e5+5;
long long res[maxn];
int main()
{
	int n;
	cin >> n;
	vector< pair< long long,long long > > v;
	for (int i=0; i<n; i++)
	{
		long long a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,1));
		v.push_back(make_pair(b,2));
	}
	sort(v.begin(),v.end());
	int x=v.size();
	long long end=-1;
	int pos=0,cnt=0;
	while (pos<x)
	{
		long long tmp=v[pos].first;
		long long sgt=tmp-end-1;
		res[cnt]+=sgt;
		while(pos<x && v[pos].first==tmp && v[pos].second==1)pos++,cnt++;
		res[cnt]++;
		while(pos<x && v[pos].first==tmp && v[pos].second==2)pos++,cnt--;
		end=tmp;
	}
	assert(cnt==0);
	for (int i=1; i<=n; i++)
	{
		cout << res[i] << " ";
	}
}