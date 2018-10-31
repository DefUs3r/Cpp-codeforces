#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n,i,j=1,clk=1;
    cin>>n;
    long long arr[1000005]={0};
    for (long long i = 0; i < n; i++)
    {
    	long long num,temp;cin>>num;temp=num;
    	while (temp--)
    	{
    		arr[j++]=clk;
    	}
    	clk++;
    }
    /*for (i = 1; arr[i]!=0 ; ++i)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;*/
    long long m;cin>>m;
    for (i = 0; i < m; ++i)
    {
    	long long query;
    	cin>>query;
    	cout<<arr[query]<<endl;
    }
    return 0;
}