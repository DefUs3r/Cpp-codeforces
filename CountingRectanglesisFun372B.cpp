/*
		.......The dark religions are departed & sweet science reigns.......
																		----William Blake,Vala(The Four Zoas), 1797
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef priority_queue< pii,std::vector<pii>,greater<pii> > maxheap;

#define pb 				push_back
#define mp 				make_pair
#define sz(a)			ll(a.size())
#define rep(i,a,b) 		for(int i=a;i<b;i++)
#define repR(i,a,b) 	for(int i=a;i>=b;i--)
#define check1(x)		cout << x << endl
#define check2(x,y)		cout << x << "=>" << y << endl
#define check3(x,y,z)	cout << x << "=>" << y << "=>" << z << endl
#define F 				first
#define S 				second
#define fifo			ios_base::sync_with_stdio(0)
#define cintie			cin.tie(0)
#define couttie			cout.tie(0)


const long long int mod=1e9+7;
const long long int N=1e5+5;

int grid[50][50];
int temp[51][51];
int comp[50][50][50][50];
int ans[51][51][51][51];
int main()
{
	fifo,cintie,couttie;
	int n,m,q;
	cin >> n >> m >> q;
	rep(i,0,n)
	{
		rep(j,0,m)
		{
			char tempchar;
			cin >> tempchar;
			grid[i][j]=tempchar-'0';
		}
	}
	rep(i,0,n)
	{
		rep(j,0,m)
		{
			temp[i+1][j+1]=temp[i+1][j]+temp[i][j+1]-temp[i][j]+grid[i][j];
		}
	}
	rep(i,0,n)
	{
		rep(j,0,m)
		{
			rep(k,i,n)
			{
				rep(l,j,m)
				{
					if(temp[k+1][l+1]-temp[i][l+1]-temp[k+1][j]+temp[i][j]==0)
					{
						comp[i][j][k][l]=1;
					}
				}
			}
		}
	}
	rep(i,0,n)
	{
		rep(j,0,m)
		{
			rep(k,0,n)
			{
				rep(l,0,m)
				{
					ans[i+1][j+1][k+1][l+1] = ans[i][j+1][k+1][l+1]+ans[i+1][j][k+1][l+1]+ans[i+1][j+1][k][l+1]+ans[i+1][j+1][k+1][l]-ans[i][j][k+1][l+1]-ans[i][j+1][k][l+1]-ans[i][j+1][k+1][l]-ans[i+1][j][k][l+1]-ans[i+1][j][k+1][l]-ans[i+1][j+1][k][l]+ans[i+1][j][k][l]+ans[i][j+1][k][l]+ans[i][j][k+1][l]+ans[i][j][k][l+1]-ans[i][j][k][l]+comp[i][j][k][l];
				}
			}
		}
	}
	rep(p,0,q)
	{
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		a--,b--,c--,d--;
		cout << ans[c+1][d+1][c+1][d+1]-ans[a][d+1][c+1][d+1]-ans[c+1][b][c+1][d+1]-ans[c+1][d+1][a][d+1]-ans[c+1][d+1][c+1][b]+ans[a][b][c+1][d+1]+ans[a][d+1][a][d+1]+ans[a][d+1][c+1][b]+ans[c+1][b][a][d+1]+ans[c+1][b][c+1][b]+ans[c+1][d+1][a][b]-ans[c+1][b][a][b]-ans[a][d+1][a][b]-ans[a][b][c+1][b]-ans[a][b][a][d+1]+ans[a][b][a][b] << endl;
	}
}