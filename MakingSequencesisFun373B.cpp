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

int main()
{
	fifo,cintie,couttie;
	ll n,m,q;
	ll comp[20];
	cin >> n >> m >> q;
	n/=q;
	ll temp=9;
	rep(i,0,17) {comp[i]=(i+1)*temp;temp*=10;}
	temp=10;
	rep(i,0,17)
	{
		if (m>=temp) n+=comp[i];
		else
		{
			n+=(m-temp/10)*(i+1);
			break;
		}
		temp*=10;
	}
	temp=9;
	ll ans=0;
	rep(i,0,17)
	{
		if (n>=comp[i]){ans+=temp;n-=comp[i];}
		else {ans+=n/(i+1);break;}
		temp*=10;
	}
	cout << ans-m+1 << endl;
	return 0;
}