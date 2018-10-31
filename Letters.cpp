#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;

ll l_b(ll arr[], int start, int end, ll x)
{
    while (start < end)
    {
        int mid = (start + end)>>1;
        if (arr[mid] >= x) end = mid;
        else start = mid + 1;
    }
    return start;
}

ll u_b(ll arr[], int start, int end, ll x)
{
    while (start < end)
    {
        int mid = (start + end)>>1;
        if (arr[mid] <= x) start = mid + 1;
        else end = mid;
    }
 
    return start;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m;
    cin >> n >> m;
    ll a[n],b[m];
    for (int i=0; i<n; i++)
    {
    	cin >> a[i];
    }
    for (int i=0; i<m; i++)
    {
    	cin >> b[i];
    }
    ll cum_ind[n];
    cum_ind[0]=a[0];
    for (int i=1;i<n;i++)
    {
    	cum_ind[i]=cum_ind[i-1]+a[i];
    }
    for (int j=0;j<m;j++)
    {
    	ll up = u_b(cum_ind,0,n,b[j]);
    	ll down = l_b(cum_ind,0,n,b[j]);
    	if (down<1) cout << down+1 << " " << b[j] << endl;
    	else cout << down+1 << " " << b[j]-cum_ind[down-1] << endl;
    }
    return 0;
}