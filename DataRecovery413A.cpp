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
ll temp[111];
int main()
{
	fifo,cintie,couttie;
	ll n,m,Min,Max;
	cin >> n >> m >> Min >> Max;
	rep(i,0,m) cin >> temp[i];
	sort(temp,temp+m);
	if (temp[0]!= Min && m<n) temp[m++] = Min;
	sort(temp,temp+m);
	if (temp[m-1]!=Max && m<n) temp[m++] = Max;
	sort(temp,temp+m);
	if (temp[0]!=Min || temp[m-1]!=Max) puts("Incorrect");
	else puts("Correct");
}