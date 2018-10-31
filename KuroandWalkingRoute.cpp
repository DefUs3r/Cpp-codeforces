#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;

ll n,x,y,a,b;

vi adj[400005];
ll parent[400005],child[400005];

void DFS(ll u, ll x)
{
	parent[u]=x;
	for (ll v=0; v<adj[u].size(); v++)
	{
		if(adj[u][v]!=x)
		{
			DFS(adj[u][v],u);
			child[u]+=child[adj[u][v]];
		}
	}
	child[u]++;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> x >> y;
    for (ll i=1; i<=n-1; i++)
    {
    	cin >> a >> b;
    	adj[a].pb(b);
    	adj[b].pb(a);
    }
    DFS(x,0);
    ll dad_y=y;
    while(parent[dad_y]!=x) dad_y=parent[dad_y];
    ll ans;
    ans=n*(n-1)-((child[x]-child[dad_y])*child[y]);
    cout << ans << endl;
    return 0;
}