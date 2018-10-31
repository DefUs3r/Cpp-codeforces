#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+2;
vector <int> adj[maxn], leaf;
int deg[maxn];
bool fl;
void DFS(int cur, int p)
{
	int daughter=0;
	for (int pos: adj[cur])
	{
		if (pos!=p)
		{
			DFS(pos,cur);
			daughter++;
		}
	}
	if (p!=0)
	{
		if (daughter > 1)fl=false;
	}
	if (daughter==0)leaf.push_back(cur);
}
int main()
{
	int n;
	cin >> n;
	for (int i=0; i<n-1; i++)
	{
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		deg[x]++,deg[y]++;
	}
	int p=0;
	for (int i=1; i<=n; i++)
		p=max(p,deg[i]);
	for (int i=1; i<=n; i++)
		if (deg[i]==p)
		{
			fl=true;
			DFS(i,0);
			if (fl)
			{
				cout << "Yes\n";
				cout << int(leaf.size()) << endl;
				for (int x:leaf)
					cout << i << " " << x << endl;
				return 0;
			}
			else return ! printf("No\n");
		}
	return 0;
}