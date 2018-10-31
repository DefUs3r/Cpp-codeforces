#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
const long long int INF=1e15;
const int N=3e3+5;
ll sz[N],cost[N],temp[N],n,ans=INF;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    for (ll i=0; i<N; i++)
    	temp[i]=INF;
    cin >> n;
    for (ll i=0; i<n; i++)
    	cin >> sz[i];
    for (ll i=0; i<n; i++)
    	cin >> cost[i];
    for (ll i=0; i<n-1; i++)
    {
    	for (ll j=i+1; j<n; j++)
    	{
    		if(sz[j]>sz[i]) temp[j]=min(temp[j],cost[i]+cost[j]);
    	}
    }
    for (ll i=1; i<n-1; i++)
    {
    	for (ll j=i+1; j<n; j++)
    	{
    		if(sz[i]<sz[j]) ans=min(ans,cost[j]+temp[i]);
    	}
    }
    if (ans==INF) ans=-1;
    cout << ans << endl;
    return 0;
}