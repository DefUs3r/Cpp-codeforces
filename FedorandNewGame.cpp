#include <bits/stdc++.h>
using namespace std;

int bin_num_cache[1100001]={0};long long lt=0;
int fedors_army[1100001]={0},;
void num_to_bin(long long n)
{
	long long k=1100000;lt=0;
	long long temp=n;
	while (temp>0 && k>=0)
	{
		bin_num_cache[k--]==temp%2;
		temp/=2;
		lt++;
	}
}
int compare_k(long long k)
{
	long long start=1100000;
	long long kount=0;
	while (start>=0)
	{
		if (bin_num_cache[start]!=fedors_army[start])
			kount++;
		bin_num_cache[start]=0;
		start--;
	}
	if (kount!=k)
		return 0;
	else
		return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n,m,k,friends=0;
    cin>>n>>m>>k;
    long long arr[m+1];
    for (long long int i = 0; i < m+1; ++i)
    {
    	cin>>arr[i];
    }
    num_to_bin(arr[m]);
    for (int i = 0; i < 1100001; ++i)
    {
    	fedors_army[i]=bin_num_cache[i];
    }
    for (int i = 0; i < m; i++)
    {
    	long long num;
    	cin>>num;
    	num_to_bin(num);
    	int fl=compare_k(num);
    	if (fl)
    		friends++;
    }
    cout<<friends<<endl;
    return 0;
}