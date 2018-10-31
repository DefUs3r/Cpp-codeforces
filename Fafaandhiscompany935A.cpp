#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())

ll countDivisors(ll n)
{
    ll cnt = 0;
    for (ll i=1; i<=sqrt(n); i++)
    {
         if (n%i==0)
         {
            if (n/i == i)
               cnt++;
 
            else
                cnt = cnt+2;
         }
     }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    cout<<countDivisors(n)-1<<endl;
    return 0;
}