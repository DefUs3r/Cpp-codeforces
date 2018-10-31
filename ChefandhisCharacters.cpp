#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    	char s[500001];
    	int arr[500001]={0};
    	cin>>s;
    	ll lt=strlen(s),c=0;
    	//ll c=0,h=0,e=0,f=0;
    	ll ans=0;
    	for_fwd(i,0,lt)
    	{
    		if (s[i]=='c' ||s[i]=='h'||s[i]=='e'||s[i]=='f')
    			arr[i]=1;
    	}
    	for_fwd(i,0,lt)
    	{
    		if (arr[i]==1&&arr[i+1]==1){
    			c++;
    			
    		}
    		cout<<"c is "<<c<<endl;
    		if (c/4 == 1 && c%4 != 0){
    			ans++;
    			c=0;
    		}
    		if (c/4 == 1 && c%4 == 0)
    		{
    			ans++;
    			if (arr[i+1]==0)
    				c=0;
    		}
    		cout<<"ans is "<<ans<<endl;
    	}
    	if (ans==0)
    		cout<<"normal"<<endl;
    	else
    		cout<<"lovely "<<ans<<endl;
    	cout<<"---------------------------------------------------------"<<endl;
    }
    return 0;
}