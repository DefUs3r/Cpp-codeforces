#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
	char t;
	cin>>N;
	ll dp[N][N];
	for_fwd(i,0,N)
	{
		dp[0][i]=0;
	}
	dp[0][0]=1;
	cin>>t;
	for_fwd(i,1,N)
	{
		if (t=='f')
		{
			dp[i][0]=0;
			for_fwd(j,1,N)
			{
				dp[i][j]=dp[i-1][j-1];
			}
		}
		else
		{
			ll x=0;
			for_back(j,N-1,0)
			{
				x=(x+dp[i-1][j])%1000000007;
				dp[i][j]=x; 
			}
		}
		cin>>t;
	}
	ll x=0;
	for_fwd(i,0,N)
	{
		x=(x+dp[N-1][i])%1000000007;
	}
	cout<<x<<endl;
    return 0;
}