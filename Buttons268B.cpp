#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n;
    cin>>n;
    long long ans=0;
    for (int i = 1; i < n; ++i)
    {
    	ans+=(n-i)*i;
    }
    cout<<ans+n<<endl;
    return 0;
}