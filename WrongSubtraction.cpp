#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n,k;
    cin >> n >> k;
    while (k--)
    {
    	if (!(n%10)) n/=10;
    	else n--;
    }
    cout << n << endl;
    return 0;
}