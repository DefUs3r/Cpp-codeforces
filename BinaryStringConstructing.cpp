#include <bits/stdc++.h>
#include <cassert>
using namespace std;
char c[int(1e2+5)];
int cnt[int(1e2+5)];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,x;
	cin >> a >> b >> x;
	string s="01";
	a--;b--;x--;
	for (int i=2; i<=x; i+=2)
	{
		a--;b--;
		s+="01";
	}
	if (x%2)
	{
		if (a>0)
		{
			a--;s+='0';
		}
		else
		{
			b--;s='1'+s;
		}
	}
	int n=s.size();
	for (int i=0; i<n; i++)
	{
		cout << s[i];
		if (s[i]=='0')while(a>0){cout << "0";a--;}
		else while(b>0){cout << "1";b--;}
	}
}