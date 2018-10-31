#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s[5001];
    cin>>s;
    int ans=0;
    for_fwd(i,0,strlen(s))
    {
    	int qm=0,totl=0;
    	for_fwd(j,i,strlen(s))
    	{
    		if (s[j]=='(')
    		{
    			totl++;
    		}
    		if (s[j]==')')
    			totl--;
    		if (s[j]=='?')
    		{
    			qm++;
    		}
    		while(qm > 0 && qm>totl)
    		{
    			totl++;
    			qm--;
    		}
      		if (totl < 0)
      			break;
      		if ((totl+qm)%2!=0)
      			continue;
      		if (qm>=totl)
      		{
        		ans++;
        	}
        }
    }
    cout<<ans<<endl;
    return 0;
}