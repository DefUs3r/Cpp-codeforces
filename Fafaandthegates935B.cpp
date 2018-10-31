#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    char s[n+1];
    cin>>s;
    ll posx=0,posy=0,cross=0,count=0,above=0,below=0;
    for_fwd(i,0,n)
    {
    	if (s[i]=='R')
    		posx++;
    	if (s[i]=='U')
    		posy++;
    	if (posy>posx){
    		if (below && !above)
    			count++;
    		above=1;
    		below=0;
    	}
    	if (posy<posx){
    		if (above && !below)
    			count++;
    		below=1;
    		above=0;
    	}
    }
    cout<<count<<endl;
    return 0;
}