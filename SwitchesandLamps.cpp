#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
int lp[2005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i=0; i<n; i++)
    {
    	for (int j=0; j<m; j++)
    	{
    		char c;
    		cin >> c;
    		arr[i][j]=c-'0';
    	}
    }
    for (int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		if(arr[i][j]==1) lp[j]++;
    	}
    }
    for (int i=0; i<n; i++)
    {
    	bool chk=true;
    	for (int j=0;j<m;j++)
    	{
    		if (arr[i][j]==1 && lp[j]==1) chk=false;
    	}
    	if (chk==true)
    	{
    		cout << "YES" << endl;
    		return 0;
    	}
    }
    cout << "NO" << endl;
    return 0;
}