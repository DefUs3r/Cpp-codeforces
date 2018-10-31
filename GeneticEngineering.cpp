#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	long long proc=0,res=0;
	cin >> s;
	int n=s.size();
	for (int i=0; i<n; i++)
	{
		if (i==0||s[i]==s[i-1])proc++;
		else
		{
			res+=1-proc%2;
			proc=1;
		}
	}
	res+=1-proc%2;
	cout << res << endl;
}