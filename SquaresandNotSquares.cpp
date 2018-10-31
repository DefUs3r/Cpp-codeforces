#include <bits/stdc++.h>
using namespace std;

long long ans=0,squarecount=0,nonsquarecount=0;
long long n,i,j;

long long findmin(long long arr[], long long n,long long check_arr[]);
long long check(long long arr[],long long n,long long check_arr[]);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    long long arr[n];
    long long temp=n;
    long long squares[n/2],nonsquares[n/2],check_arr[n];
    while (temp--)
    	cin>>arr[i++];
    long long check_square_quantity=check(arr,n,check_arr);
    if (check_square_quantity==0)
    {
    	ans=0;
    }
    else
    {
    	if (check_square_quantity>0)
    	{
    		ans=check_square_quantity;
    	}
    	else if (check_square_quantity<0)
    	{
    		for (j=0;j<(-1*check_square_quantity);j++)
    		{
    			if (check_arr[j]!=-1)
    			{
    				ans+=findmin(arr,n,check_arr); // define findmin as min integer diff between a non square and its root in arr[n]
    			}
    		}
    	}
    }
    cout<<ans<<endl;
    return 0;
}

long long check(long long arr[],long long n,long long check_arr[])
{
	for (i=0;i<n;i++)
	{
		float temp=sqrt(arr[i]);
		if (arr[i]-(temp*temp) == 0)
		{
			squarecount++;
			check_arr[i]=1;
		}
		else
		{
			nonsquarecount++;
			long long num=(temp*temp);
            check_arr[i]=num;
		}
	}
	return (squarecount-nonsquarecount);
}

long long findmin(long long arr[], long long n,long long check_arr[])
{
    long long min=9999999999999;
    for (i=0;i<n;i++)
    {
        if (check_arr[i]!=-1)
        if (arr[i]-check_arr[i]<min)
        {
            min=arr[i]-check_arr[i];
        }
    }
    return min;
}