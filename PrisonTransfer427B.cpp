#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,t,c,x;
	long long int res=0;
	vector <int> tmp;
	cin >> n >> t >> c;
	tmp.push_back(-1);//for taking max
	for (int i=0; i<n; i++)
	{
		cin >> x;
		if (x>t)tmp.push_back(i);
	}
	tmp.push_back(n);
	x=tmp.size();
	for (int i=1; i<x; i++)
	{
		int temp=tmp[i]-tmp[i-1]-1;
		res+=max(temp-c+1,0);
	}
	cout << res << endl;
	return 0;
}