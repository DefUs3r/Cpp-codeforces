#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
ll n,k,l;
vector <ll> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> k >> l;
    for (ll i=0; i<(n*k); i++)
    {
    	ll x;
    	cin >> x;
    	a.pb(x);
    }
    sort(a.begin(),a.end());
    ll pos;
    /*
    for (ll i=0; i<(n*k); i++)
    {
    	cout << a[i] << " "; 
    }
    cout << endl;
    */
    for (ll i=1; i<a.size(); i++)
    {
    	if (a[i]<=(a[0]+l))
    	{
    		pos=i+1;
    	}
    }
    if (pos<n)
    {
    	cout << "0" << endl;
    	return 0;
    }
    else
    {
    	ll sum=0,x=0;
    	for (ll i=0; i<n; i++)
    	{
    		sum+=a[x];
    		x++;
    		for (ll j=0; j<k-1; j++)
    		{
    			if(n-i<pos-x+1) x++;
    			else break;
    		}
    	}
    	cout << sum << endl;
    	return 0;
    }
}