#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp(a,b) make_pair(a,b)
const long long int mod=1e9+9;
ll n,a,b,k,i;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> a >> b >> k;
    cin >> s;
    string total;
    for (ll i=1; i<=(n/k); i++)
    {
    	cout << n/k << endl;
    	total=total+s;
    	cout << total << endl;
    }
   	string s1(s,n%k);
   	cout << s1;
   	total=s1+total;
    cout << total << endl;
    return 0;
}