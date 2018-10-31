#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
const long long int N=1e6+5;
const long long int INF=1e7+1;
ll m,n,k,s,u,v;
vector<ll> adj[N];
vector<ll> storage[301];
ll q[N],temp,dist[N][301];
void bfs(ll x)
{
	queue<ll> q;
	for (ll &i:storage[x])
	{
		q.push(i);
		dist[i][x]=0;
	}
	while (q.size())
	{
		temp=q.front();
		q.pop();
		for (ll &i:adj[temp])
		{
			if (dist[i][x]==INF)
			{
				dist[i][x]=dist[temp][x]+1;
				q.push(x);
			}
		}
	}
	return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m >> k >> s;
    for (int i=1;i<=n;i++)
    {
    	ll t;
    	cin >> t;
    	storage[t].pb(i);
    }
    for (int i=0;i<m;i++)
    {
    	cin >> u >> v;
    	adj[u].pb(v);
    	adj[v].pb(u);
    }
    for (ll i=0; i<N; i++)
    	for (ll j=0; j<301; j++)
    		dist[i][j]=;
    for (ll i=1; i<=k; i++){bfs(i);}
    for (ll i=1; i<=n; i++)
    {
    	sort(dist[i],dist[i]+k+1);
    	ll cost=0;
    	for (ll j=1; j<=s; j++)
    		cost+=dist[i][j];
    	cout << cost << " ";
    }
    cout << endl;
    return 0;
}