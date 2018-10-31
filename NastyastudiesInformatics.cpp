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
ll l,r,x,y;
/*ll gcd(ll a, ll b)
{
	return b ? gcd(b, a%b) : a;
}
*/
ll func()
{
	ll n=x*y;
	ll temp=0;
	if (l%x) l=(l/x+1)*x;
    for (ll i=l;i<=y && i<=sqrt(n); i+=x)
    {
    	if (i > r) break;
    	if ((n/i) < i) break;
        if (n%i) continue;
        if ((n/i) > r) continue;
        if (__gcd(ll(i),n/i) != x) continue;
        if ((n/i) == i) temp++;
        else temp+= 2;
    }
    return temp;
}
int main()
{
	fifo,cintie,couttie;
	cin >> l >> r >> x >> y;
	ll ans=func();
	cout << ans << endl;
	return 0;
}