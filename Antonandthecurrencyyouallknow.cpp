#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n=s.length();
	for (int i=0; i<n-1; i++)
	{
		if ((s[i]-'0')%2==0 && s[i]<s[n-1])
		{
			swap(s[i],s[n-1]);
			cout << s << endl;
			return 0;
		}
	}
	for (int i=n-2; i>=0; i--)
	{
		if ((s[i]-'0')%2==0)
		{
			swap(s[i],s[n-1]);
			cout << s << endl;
			return 0;
		}
	}
	cout << "-1\n";
	return 0;
}