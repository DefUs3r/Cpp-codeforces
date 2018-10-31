#include <bits/stdc++.h>
using namespace std;
void mergesort(long long arr[ ],long long l,long long r);
void combine(long long arr[ ],long long l,long long mid,long long r);
double maxtwo(long long a, long long b);
void mergesort(long long arr[ ], long long l, long long r)
{
	if (l<r)
	{
		long long mid= l + ( ( r - l )  / 2 );
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		combine(arr,l,mid,r);
	}
	else
	{
		return;
	}
}
void combine(long long arr[ ],long long l,long long mid, long long r)
{
	long long i=l,j=mid+1,k=l;
	long long left[mid-l+1],right[r-mid];
	for(i=l;i<=mid;i++)
	{
		left[i-l]=arr[i];
	}
	for (i=mid+1; i<=r; i++)
	{
		right[i-mid-1]=arr[i];
	}
	i=0,j=0;
	while (i<(mid-l+1) && j<(r-mid))
	{
		if (left[i]>=right[j])
		{
			arr[k++]=right[j++];
		}
		else
		{
			arr[k++]=left[i++];
		}
	}
	while (i<(mid-l+1))
	{
		arr[k++]=left[i++];
	}
	while (j<(r-mid))
	{
		arr[k++]=right[j++];
	}
}
double maxtwo(long long a,long long b)
{
	if (a>b)
		return a;
	return b;
}
long long n,l;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n>>l;
    long long arr[n];
    for (long long i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    double max;
    /*if (arr[0]!=0)
    {
    	if (arr[n-1]!=l)
    		max=maxtwo(2.0*arr[0],2.0*(l-arr[n-1]));
    	else
    		max=2*arr[0];
    }
    else
    	max=-999999999999999999;*/
    max=maxtwo(2.0*arr[0],2.0*(l-arr[n-1]));
    //printf("max initial = %lf\n", max);
    for (long long i = n-2; i >= 0; i--)
    {
    	if (max<(arr[i+1]-arr[i]))
    		max=arr[i+1]-arr[i];
    	//printf("%lf\n", max);
    }
    double ans=(max/2.0)*1.0;
    printf("%.10lf\n", ans);
    return 0;
}