#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vector<ll> m_vect(m);
    vector<ll> n_vect(n);
    for_fwd(i,0,n)
    {
    	cin>>n_vect[i];
    }
    sort( n_vect.begin(), n_vect.end());
    for_fwd(i,0,m)
    {
    	cin>>m_vect[i];
    }
    sort( m_vect.begin(), m_vect.end());
    vector<ll> arr((n-1)*m);
    ll k=0;
    ll max=-1000000000000000000;
    ll ind=0;
    for_fwd(i,0,n)
    {
    	for_fwd(j,0,m)
    	{
    		ll temp=m_vect[j]*n_vect[i];
    		if (temp>max){
    			max=temp;
    			ind=i;

    		}
    	}
    }
    max=-1000000000000000000;
    for_fwd(i,0,n)
    {
    	if(i==ind){
    		continue;
    	}
    	else
    	{
    		for_fwd(j,0,m)
    		{
    			ll temp=m_vect[j]*n_vect[i];
    			if (temp>max){
    				max=temp;
    			}
    		}
    	}
    }
    cout<<max<<endl;
    return 0;
}