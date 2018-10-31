#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,ans=0;cin>>n;
    vector< pair< ll,ll > > v(n);
    for_fwd(i,0,n)
    {
    	cin>>v[i].first>>v[i].second;
    }
    /*cout<<endl;
    for_fwd(i,0,n)
    {
    	cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    //cout<<endl;
    ll xsame=0,ysame=0,bothsame=0;
    sort(v.begin(),v.end());
    /*cout<<"sort by first"<<endl;
    for_fwd(i,0,n)
    {
    	cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    */for_fwd(i,0,n-1)
    {
    	if (v[i].first==v[i+1].first && v[i+1].first!=v[i+2].first){
    		xsame+=2;
    		ans+=((xsame*(xsame-1))/2);
    		xsame=0;
    		continue;
    	}
    	if (v[i].first==v[i+1].first)
    		xsame++;
    	//cout<<"xsame is "<<xsame<<endl;
    }
    sort(v.begin(), v.end(),sortbysec);
    /*cout<<"sort by second"<<endl;
    for_fwd(i,0,n)
    {
    	cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    */for_fwd(i,0,n-1)
    {
    	if (v[i].second==v[i+1].second && v[i+1].second!=v[i+2].second){
    		ysame+=2;
    		ans+=((ysame*(ysame-1))/2);
    		ysame=0;
    		continue;
    	}
    	if (v[i].second==v[i+1].second)
    		ysame++;
    	//cout<<"ysame is "<<ysame<<endl;
    }
    for_fwd(i,0,n-1)
    {
    	if (v[i]==v[i+1] && v[i+1]!=v[i+2])
    	{
    		bothsame+=2;
    		ans-=((bothsame*(bothsame-1))/2);
    		bothsame=0;
    		continue;
    	}
    	if (v[i]==v[i+1])
    		bothsame++;
    	//cout<<"bothsame is "<<bothsame<<endl;
    }
    cout<<ans<<endl;
    return 0;
}