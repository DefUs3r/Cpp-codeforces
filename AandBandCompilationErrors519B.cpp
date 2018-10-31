#include <bits/stdc++.h>
using namespace std;
long long sum_arr(long long arr[],long long limit)
{
	long long temp=0;
	for (int i = 0; i < limit; ++i)
	{
		temp+=arr[i];
	}
	return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n;
    cin>>n;
    long long error_series_1[n],error_series_2[n-1],error_series_3[n-2];
    for (int i = 0; i < n; ++i)
    	cin>>error_series_1[i];
    for (int i = 0; i < n-1; ++i)
    	cin>>error_series_2[i];
    for (int i = 0; i < n-2; ++i)
    	cin>>error_series_3[i];
    long long sum_1=sum_arr(error_series_1,n);
    long long sum_2=sum_arr(error_series_2,n-1);
    long long sum_3=sum_arr(error_series_3,n-2);
    long long error_1=sum_1-sum_2;
    long long error_2=sum_2-sum_3;
    cout<<error_1<<endl<<error_2<<endl;
    return 0;
}