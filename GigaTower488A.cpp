#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int check (long long int a)
{
	if (a<0)
		a*=-1;
	long long temp=a;int f=0;
	while (temp>0 && f==0)
	{
		if (temp%10==8)
			f=1;
		temp/=10;
	}
	return f;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,ans=0;
    cin>>a;
    for_fwd(i,1,17)
    {
    	if (check(a+i))
    	{
    		cout<<i<<endl;
    		return 0;
    	}
    }
}