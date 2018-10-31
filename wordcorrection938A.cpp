#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,fl=0;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    for_fwd(i,0,n)
    {
    	if (fl!=1 && (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='y'))
    	{
    		cout<<arr[i];
    		fl=1;
    	}
    	if (arr[i]!='a' && arr[i]!='e'&& arr[i]!='i' && arr[i]!='o' && arr[i]!='u' &&  arr[i]!='y')
    	{
    		cout<<arr[i];
    		fl=0;
    	}
    	if (fl==1 && (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='y'))
    		continue;
    }
    cout<<endl;
    return 0;
}