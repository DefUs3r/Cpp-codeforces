#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,posfr=1000000;
    cin>>n;
    ll prizes[n];
    for_fwd(i,0,n)
    {
    	cin>>prizes[i];
    }
    ll i=1,j=posfr,time=0,mytime=0,myfriendstime=0;
    ll mytime[n],myfriendstime[n];
    mytime[0]=prizes[i]-1;
    myfriendstime[0]=j-prizes[n-1];
    for_fwd(k,1,n)
    {
    	mytime[k]=prizes[k]-prizes[k-1];
    }
    for_fwd(k,1,n)
    {
    	myfriendstime[k]=prizes[n-k]-prizes[n-k-1];
    }
    cout<<time<<endl;
    return 0;
}