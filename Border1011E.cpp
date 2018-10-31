#include <bits/stdc++.h>
using namespace std;
long long int n,k;
set <long long int> s;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> k;
	long long int g=0;
	for (int i=0; i<n; i++)
	{
		long long int x;
		cin >> x;
		g=__gcd(g,x);
	}
	long long int i=0,j=0;
	for (i=0; i<k; i++)
	{
		long long tmp = j%k;
		s.insert(tmp);
		j += g;
	}
	cout << s.size() << endl;
	for (set <long long int>::iterator i=s.begin(); i!=s.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}