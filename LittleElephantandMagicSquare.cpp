#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3][3];
    int sum=0;
    for_fwd(i,0,3)
    {
    	for_fwd(j,0,3)
    	{
    		cin>>arr[i][j];
    	}
    }
    sum=(arr[1][0]+arr[0][2]+arr[2][1]+3*arr[2][0])/2;
    arr[0][0]=sum-arr[1][0]-arr[2][0];
    arr[1][1]=sum-arr[2][0]-arr[0][2];
    arr[2][2]=sum-arr[2][0]-arr[2][1];
    for_fwd(i,0,3)
    {
    	for_fwd(j,0,3)
    	{
    		cout<<arr[i][j]<<" ";
    	}
    	cout<<endl;
    }
    cout<<endl;
    return 0;
}