#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
const long long int sz=1e6+5;
const double pi=acos(-1);
ll n,dp[sz];
ll vol[sz],sort_vol[sz];
ll BIT[4*sz];

ll seg(ll x)
{
	ll temp=0;
	while(x>0)
	{
		temp=max(temp,BIT[x]);
		x-=(x&-x);
	}
	return temp;
}

void upd(ll x, ll id)
{
	while(x<=n)
	{
		BIT[x]=max(BIT[x],id);
		x+=(x&-x);
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll maxim=0;
    ll r,h;
    cin >> n;
    for (ll i=1; i<=n; i++)
    {
    	cin >> r >> h;
    	sort_vol[i-1]=((ll)pow(r,2))*h;
    	vol[i]=sort_vol[i-1];
    }
    sort(sort_vol,sort_vol+n);
    for (ll i=1; i<=n; i++)
    {
    	dp[i]=vol[i];
    	ll pos=lower_bound(sort_vol,sort_vol+n,vol[i])-sort_vol;
    	dp[i]=max(dp[i],dp[i]+seg(pos));
    	upd(pos+1,dp[i]);
    	maxim=max(maxim,dp[i]);
    }
    cout << setprecision(11) << fixed;
    cout << (double)((double)pi*maxim) << endl;
    return 0;
}