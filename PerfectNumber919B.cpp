#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define for_fwd(i,a,b,c) for(long long i=a;i<b;i+=c)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int check(long long n);
int check(long long n)
{
	long long temp=n,sum=0;
	while(temp>0)
	{
		sum+=(temp%10);
		temp/=10;
	}
	if (sum==10)
		return 1;
	else
		return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>k;
    long long count=1,i;
    for (i = 10; count < k ; i+=9)
    {
    	//cout<<i<<" "<<check(i)<<" "<<count<<" "<<endl;
    	if (check(i)==1)
    	{
    		count++;
    	}
    }
    while (check(i)==0)
    	i+=9;
    cout<<i<<endl;
    return 0;
}