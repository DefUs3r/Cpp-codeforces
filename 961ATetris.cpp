#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    ll arr[n],pts=0;
    for (ll i=0; i<n; i++)
    {
    	arr[i]=0;
    }
    for (ll i=0; i<m; i++)
    {
    	bool last=true;
    	ll pos;
    	cin >> pos;
    	arr[pos-1]++;
    	for (ll j=0; j<n; j++)
    	{
    		if (arr[j]==0)
    		{
    			last=false;
    			break;
    		}
    	}
    	while (last==true)
    	{
    		for (ll j=0; j<n; j++)
    		{
    			arr[j]--;
    		}
    		pts++;
    		last=true;
    		for (ll j=0; j<n; j++)
    		{
    			if (arr[j]==0)
    			{
    				last=false;
    				break;
    			}
    		}
    	}

    }
    cout << pts <<endl;    
    return 0;
}