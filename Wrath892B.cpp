#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll arr[n];
    for_fwd(i,0,n)
    {
    	cin>>arr[i];
    }
    ll life[n],alive=0;
    for_fwd(i,0,n)
    {
    	life[i]=1;
    }
    for_back(i,n-1,0)
    {
    	ll kill_range=arr[i];
    	for_back(j,i-1,i-kill_range)
    	{
    		life[j]=0;
    	}
    }
    /*for_fwd(i,0,n)
    {
    	cout<<life[i]<<" ";
    }
    cout<<endl;
    for_fwd(i,0,n)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;*/
    for_fwd(i,0,n)
    {
    	alive+=life[i];
    }
    cout<<alive<<endl;
    return 0;
}