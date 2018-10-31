#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
vi tree[200005];
vector <pii> path[200005];
bool vis[200005]={false};
int n,a,b,stamp=1;
void DFS(int x)
{
	vis[x]=true;
	for (int i=0; i<tree[x].size(); i++)
	{
		if (vis[tree[x][i]]==false)
		{
			DFS(tree[x][i]);
			path[x].pb(mp(tree[x][i],stamp));
			path[tree[x][i]].pb(mp(x,stamp));
			stamp++;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for (int i=0; i<n-1; i++)
    {
    	cin >> a >> b;
    	a++,b++;
    	tree[a].pb(b);
    	tree[b].pb(a);
    }
    DFS(1);
    return 0;
}