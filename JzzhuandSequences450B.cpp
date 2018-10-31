#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long x,y,n;
    cin>>x>>y>>n;
    long long arr[6];
    arr[0]=-1*y+x;
    arr[1]=x;
    arr[2]=y;
    arr[3]=y+(-1 * x);
    arr[4]=-1*x;
    arr[5]=-1*y;
    long long ans=0;
    if (arr[n%6]>=0)
    	ans=((arr[n%6])%1000000007);
    else
    	ans=((arr[n%6]+2000000014)%1000000007);
    cout<<ans<<endl;
    return 0;
}