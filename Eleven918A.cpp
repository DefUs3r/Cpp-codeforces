#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(i=a;i<b;i++)
#define for_back(i,a,b) for(i=a;i>=b;i--)

long long fib(long long n)
{
  long long f[n+1];
  long long i;
  f[0] = 0;
  f[1] = 1;
  for (i = 2; i <= n; i++)
  {
      f[i] = f[i-1] + f[i-2];
  }
  return f[n];
}
long long i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    char arr[n+1];
    for_fwd(i,0,n+1)
    {
    	arr[i]='o';
    }
    for(i=fib(1);fib(i)<=n;i++)
    {
    	arr[fib(i)]='O';
    	//cout<<fib(i);
    }
    //cout<<endl;
    for_fwd(i,1,n+1)
    {
    	cout<<arr[i];
    }
    cout<<endl;
    return 0;
}