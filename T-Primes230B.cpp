#include <bits/stdc++.h>
using namespace std;

long long prime_cache[1000008]={0};
void SieveOfEratosthenes(long long n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (long long p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (long long int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (long long int p=2; p<=n; p++)
    	if (prime[p])
    		prime_cache[p]=1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    SieveOfEratosthenes(1000008);
    int n;
    cin>>n;
    long long arr[n][2];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i][0];
    	arr[i][1]=sqrt(arr[i][0]);
    }
    for (long long i = 0; i < n; ++i)
    {
    	if (prime_cache[arr[i][1]])
    	{
    		if (arr[i][0]==(arr[i][1]*arr[i][1]))
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	}
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}