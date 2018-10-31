#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int x=s.size();
	bool flag=true;
	for (int i=0; i<x; i++)
		if (s[i]!='1'&& s[i]!='4') flag=false;
	if (s[0]=='4') flag=false;
	if (s.find("444")!=s.npos)flag=false;
	if (flag==true) cout << "YES\n";
	else cout << "NO\n";
}