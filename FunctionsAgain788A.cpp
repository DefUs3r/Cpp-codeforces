#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    long long arr[n],diff[n-1],sum[n-1];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[n];
    }
    for (i=0;i<n-1;i++)
    {
    	diff[i]=abs(arr[i]-arr[i+1]);
    	sum[i]=0;
    }
    sum[0]=diff[0];
    for (int i = 1; i < n-1; i++)
    {
    	if (i%2==1)
    		sum[i]=sum[i-1]-diff[i];
    	else
    		sum[i]=sum[i-1]+diff[i];
    }
    //refer logicoder's idea.
    return 0;
}