#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    int count_x=0,char_del=0;
    string s;
    cin >> s;
    for (int i=0; i<n; i++)
    {
    	if (s[i]=='x') count_x++;
    	if (i==n-1||s[i]!='x')
    	{
    		if (count_x>=3) char_del+=(count_x-2);
    		count_x=0;
    	}
    }
    cout << char_del << endl;
    return 0;
}