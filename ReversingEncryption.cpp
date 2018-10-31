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
ll n;
string t;
vector<ll> v;
void reverseStr(string& str)
{
    int n = str.length();
    rep(i,0,n/2)
    	swap(str[i], str[n - i - 1]);
}
void Divisors(ll n)
{
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (i==(n/i)) v.pb(i);
            else
            {
            	v.pb(i);
            	v.pb(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
}
int main()
{
	fifo,cintie,couttie;
	cin >> n >> t;
	Divisors(n);
	rep(i,1,sz(v))
	{
		string temp=t.substr(0,v[i]);
		reverseStr(temp);
		t.replace(0,v[i],temp);
		// check1(temp);
	}
	cout << t << endl;
	return 0;
}