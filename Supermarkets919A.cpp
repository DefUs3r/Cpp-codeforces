#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    double min=999999999999;
    for_fwd(i,0,n){
    	double a,b;
    	cin>>a>>b;
    	double check=(m*a*1.0/b);
    	//printf("%.10lf\n", check);;
    	if (min>check)
    		min=check;
    }
    printf("%.10lf\n", min);
    return 0;
}