#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>k;
    long long ans=19;
    for_fwd(i,0,k)
    {
        ans+=9;
        if (ans%10==0)
            ans+=10-1;
        else if (ans%100==0)
            ans+=100-1;
        else if (ans%1000==0)
            ans+=1000-1;
        else if (ans%10000==0)
            ans+=10000-1;
        else if (ans%100000==0)
            ans+=100000-1;
        else if (ans%1000000==0)
            ans+=1000000-1;
        else if (ans%10000000==0)
            ans+=10000000-1;
        else if (ans%100000000==0)
            ans+=100000000-1;
        else if (ans%1000000000==0)
            ans+=1000000000-1;
        else if (ans%10000000000==0)
            ans+=10000000000-1;
    }
    cout<<ans<<endl;
    return 0;
}