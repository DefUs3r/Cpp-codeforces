#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;cin>>x;
    if (x<=36)
    {
    	if (x==1)
    	{
    		cout<<"4"<<endl;
    		return 0;
    	}
    	while (x-2>=0)
    	{
    		cout<<"8";
    		x-=2;
    	}
    	if (x==1)
    	{
    		cout<<"4";
    	}
    }
    else
    	cout<<"-1";
    cout<<endl;
    return 0;
}