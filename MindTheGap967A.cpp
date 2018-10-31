#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp(a,b) make_pair(a,b)
const long long int mod=1e9+7;

int arr[1705];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s;
    cin >> n >> s;
    for (int i=0; i<n; i++)
    {
    	int h,m;
    	cin >> h >> m;
    	arr[h*60+m]=1;
    	arr[h*60+m+1]=1;
    }
    for (int i=0; i<1502; i++)
    {
    	bool flag=false;
    	if (arr[i]==0)
    	{
    		for (int j=1; j<=2*s+1; j++)
    		{
    			if(arr[j+i]==0) flag=true;
    			else
    			{
    				flag=false;
    				break;
    			}
    		}
    	}
    	if (flag==true)
    	{
    		cout << (i+s)/60 << " " << (i+s)%60 << endl;
    		return 0;
    	}
    }
}