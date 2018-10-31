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
ll n,k;
ll arr[26];
ll cons[26];
string s;
void weirdo_as_fuck_algo()
{
	ll i=0;
	while(k>0)
	{
		if (arr[i]<k)
		{
			cons[i]=arr[i];
			k-=arr[i];
			i++;
		}
		else
		{
			cons[i]=k;
			k=0;
		}
	}
	rep(i,0,n)
	{
		if (cons[s[i]-'a']>0){cons[s[i]-'a']--;s[i]='.';}
	}
}
int main()
{
	fifo,cintie,couttie;
	cin >> n >> k >> s;
	ll x=s.length();
	rep(i,0,x)
	{
		arr[s[i]-'a']++;
	}
	weirdo_as_fuck_algo();
	rep(i,0,n)
	{
		if (s[i]!='.') cout << s[i];
	}
	cout << endl;
	return 0;
}