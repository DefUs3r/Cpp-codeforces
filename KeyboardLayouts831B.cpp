/*
		.......The dark religions are departed & sweet science reigns.......
																		----William Blake,Vala(The Four Zoas), 1797
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
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
	string s1,s2,text;
	cin >> s1 >> s2 >> text;
	map <char,char> decode;
	map <char,char>:: iterator itr;
	rep(i,0,26)
	{
		decode.insert(pcc (s1[i],s2[i]));
	}
	int n=text.length();
	rep(i,0,n)
	{
		if (text[i]<=57 && text[i]>=48) cout << text[i];
		if (text[i]>=65 && text[i]<=90)
		{
			char temp=text[i]-'A'+'a';
			// check1(temp);
			char print=decode.find(temp)->S;
			print=print-'a'+'A';
			// check1(print);
			cout << print;
		}
		if (text[i]>=97 && text[i]<=122)
		{
			char print=decode.find(text[i])->S;
			// check1(print);
			cout << print;
		}
	}
	cout << endl;
	return 0;
}