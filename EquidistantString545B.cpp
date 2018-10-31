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
	string s,t;
	cin >> s >> t;
	ll n=s.length();
	ll temp=0;
	rep(i,0,n)
	{
		if (s[i]!=t[i]) temp++;
	}
	//check1(temp);
	if (temp%2==1) cout << "impossible" << endl;
	else
	{
		bool flag=false;
		// temp/=2;
		rep(i,0,n)
		{
			if (s[i]==t[i]) cout << s[i];
			else
			{
				if (temp==0)
				{
					cout << endl;
					return 0;
				}
				if (flag)
				{
					temp--;
					cout << t[i];
					flag=false;
				}
				else
				{
					temp--;
					cout << s[i];
					flag=true;
				}
			}
		}
		cout << endl;
		return 0;
	}
}