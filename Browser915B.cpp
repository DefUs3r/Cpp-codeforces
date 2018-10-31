#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,pos,l,r;
    cin>>n>>pos>>l>>r;
    if (l==1 && r==n)
    {
    	cout<<"0"<<endl;
    	return 0;
    }
    else if (l!=1 && r==n)
    {
    	cout<<abs(pos-l)+1<<endl;
    	return 0;
    }
    else if (r!=n && l==1)
    {
    	cout<<abs(pos-r)+1<<endl;
    	return 0;
    }
    else if (l!=1 && r!=n)
    {
    	cout<<r-l+min(abs(pos-l),abs(pos-r))+2<<endl;
    	return 0;
    }
}