#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    vector<ll> dragon(n);
    for_fwd(i,0,n)
    {
    	cin>>dragon[i];
    }
    ll max=-1,ans_start,ans_end,j;
    for_fwd(i,0,n)
    {
    	cout<<"------------New iteration-------"<<endl;
    	ll count=1;
    	if (i==n-1)
    		break;
    	if (dragon[i]==2)
    	{
    		ans_start=i;
    		for_fwd(j,i,n)
    		{
    			if (dragon[j]==2)
    			{
    				count++;
    			}
    			else if (dragon[j]==1)
    			{
    				if (dragon[j+1]==1)
    					count++;
    				else if (dragon[j+1]==2)
    				{
    					count=1;
    					continue;
    				}
    			}
    			cout<<"i= "<<i<<" j= "<<j<<endl;
    			if (count>max)
    			{
    				max=count;
    				ans_end=j;
    			}
    			cout<<"max = "<<max<<endl;
    			cout<<"ans_end= "<<ans_end<<" ans_start= "<<ans_start<<endl;
    		}
    	}
    }
    cout<<"max = "<<max<<endl;
    ll length=0;
    for_fwd(i,0,n)
    {
    	if (i==ans_start)
    	{
    		length+=max;
    		i=ans_end;
    		continue;
    	}
    	if (dragon[i]==2)
    		length++;
    	if (dragon[i]==1)
    	{
    		if (dragon[i+1]==2)
    		{
    			continue;
    		}
    		else
    			length++;
    	}
    }
    cout<<length<<endl;
    return 0;
}