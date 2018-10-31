#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
int n,m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    vector< pair <long long,long long> > arr;
    ll a,x,b,y;
    for (ll i=0; i<n; i++)
    {
    	cin >> a >> x;
    	arr.pb(mp(a,x));
    }
    cin >> m;
    for (ll i=0; i<m; i++)
    {
    	cin >> b >> y;
    	arr.pb(mp(b,y));
    }
    sort(arr.begin(),arr.end());
    ll cost=0,temp;
    for (ll i=0; i<arr.size(); i++)
    {
    	temp=arr[i].first;
    	ll maxim=0;
    	if (temp==arr[i].first)
    	{
    		while (arr[i].first==temp)
    		{
    			maxim=max(maxim,arr[i].second);
    			i++;
    		}
    		cost+=maxim;
    		i--;
    	}
    	else cost+=arr[i].second;
    	//cout << cost << endl;
    }
    cout << cost << endl;
    return 0;
}