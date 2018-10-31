#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp(a,b) make_pair(a,b)
const long long int mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int len=s.length();
    int link=0,pearl=0;
    for (int i=0; i<len; i++)
    {
    	if(s[i]=='o') pearl++;
    	else link++;
    }
    if (pearl==0) cout << "YES" << endl;
    else if (link % pearl==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}