#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n,a,b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> a >> b;
    string s;
    cin >> s;
    bool flag;ll count=0;
    flag=false;
    ll len=0;
    for (ll i=0; i<n+1; i++)
    {
    	if (s[i]=='*' || i==n)
    	{
    		if (len%2==0)
    		{
    			count+=min(a,len/2)+min(b,len/2);
    			a-=min(a,len/2),b-=min(b,len/2);
    		}
    		else if(len%2==1 || i==n)
    		{
    			if (a>b)
    			{
    				count+=min(a,(len+1)/2)+min(b,len/2);
    				a-=min(a,(len+1)/2),b-=min(b,len/2);
    			}
    			else
    			{
    				count+=min(b,(len+1)/2)+min(a,len/2);
    				a-=min(a,len/2);
    				b-=min(b,(len+1)/2);
    			}
    		}
    		len=0;
    	}
    	else
    	{
    		len++;
    	}
    }
    cout << count << endl;
    return 0;
}