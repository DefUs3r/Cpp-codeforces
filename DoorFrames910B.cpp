#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b;
    cin>>n>>a>>b;
    ll test=2*(2*a+b);
    if (test%n==0) cout<<test/n<<endl;
    else cout<<test/n+1<<endl;
    return 0;
}