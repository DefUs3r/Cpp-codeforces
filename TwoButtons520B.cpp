#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n,m,ans=0;
    cin>>n>>m;
    while (m!=n)
    {
    	while (m<n)
    	{
    		ans++;
    		m++;
    	}
    	while (m>n)
    	{
    		ans++;
    		if (m%2==0)
    			m/=2;
    		else
    		{
    			m++;
    			ans++;
    			m/=2;
    		}
    	}
    }
    cout<<ans<<endl;
    return 0;
}