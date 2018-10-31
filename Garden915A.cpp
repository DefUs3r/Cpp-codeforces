#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for_fwd(i,0,n)
    {
    	cin>>arr[i];
    }
    int max=-1;
    for_fwd(i,0,n)
    {
    	if (k%arr[i]==0)
    		if (arr[i]>max)
    			max=arr[i];
    }
    cout<<k/max<<endl;
    return 0;
}