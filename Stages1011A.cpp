#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	string st;
	cin >> st;
	sort(st.begin(),st.end());
	int payload=0;
	char tmp='a'-2;
	for (int i=0; i<n; i++)
	{
		if (st[i]-tmp >= 2)payload+=st[i]-'a'+1,tmp=st[i],k--;
		if (k==0)
		{
			cout << payload << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}