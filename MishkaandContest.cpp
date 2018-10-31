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
ll n,k,a[105];
int main()
{
	fifo,cintie,couttie;
	cin >> n >> k;
	rep(i,0,n) cin>>a[i];
	int i=0,j=n-1,count=0;
	while(1)
	{
		if (j==i)
		{
			if (a[i]<=k)
			{
				count++;
			}
			cout << count << endl;
			return 0;
		}
		if (a[i]>k && a[j]>k)
		{
			cout << count << endl;
			return 0;
		}
		if (a[i]<=k)
		{
			count++;
			i++;
			continue;
		}
		if (a[j]<=k)
		{
			count++;
			j--;
			continue;
		}
	}
}