#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    char name[n][11],name_ips[n][18],comm[m][11],comm_ips[m][18];
    for_fwd(i,0,n)
    {
    	cin>>name[i];
    	cin>>name_ips[i];
    }
    for_fwd(i,0,m)
    {
    	cin>>comm[i];
    	cin>>comm_ips[i];
    }
    for_fwd(i,0,m)
    {
    	long long x=strlen(comm_ips[i])-1;
    	comm_ips[i][x]='\0';
    }
    for_fwd(i,0,m)
    {
    	for_fwd(j,0,n)
    	{
    		if (strcmp(comm_ips[i],name_ips[j])==0)
    		{
    			//cout<<comm[i]<<endl;
    			cout<<comm[i]<<" "<<comm_ips[i]<<"; #"<<name[j];
    		}
    	}
    	cout<<endl;
    }
    return 0;
}