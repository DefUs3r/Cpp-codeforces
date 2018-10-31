#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    double n;
    cin>>n;
    long long ans;
    ans=(floor(n/2)+1)*(ceil(n/2));
    //cout<<floor(n/2)+1<<" ";
    //cout<<ceil(n/2)<<endl;
    cout<<ans<<endl;
    return 0;
}