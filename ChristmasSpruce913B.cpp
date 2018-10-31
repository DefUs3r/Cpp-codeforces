#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> p(n),deg(n),leaf(n);
    for_fwd(i,1,n)
    {
    	cin>>p[i];
    	p[i]--;
    	deg[p[i]]++;
    }
    for_fwd(i,0,n)
    {
    	if (deg[i]==0)
    	{
    		leaf[p[i]]++;
    	}
    }
    for_fwd(i,0,n)
    {
    	if (deg[i]>0 && leaf[i]<3)
    	{
    		cout<<"No"<<endl;
    		return 0;
    	}
    }
    cout<<"Yes"<<endl;
    return 0;
}