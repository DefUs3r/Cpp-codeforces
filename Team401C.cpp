#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,arr[3000005],x,k;
    cin>>n>>m;
    if (n - 1 <= m && m <= 2*(n + 1))
    {
        if (m == n - 1) {
            arr[0] = -1;
            arr[m + 1] = -1;
            x = n - 1;
        }
        else if (m == n)
        {
            arr[m + 1] = -1;
            x = n;
        }
        else x = n + 1;
        k = m % x;
        if (k == 0 && m != x) k = n + 1;
        if (arr[0] == -1) cout<<"0";
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != -1){
            if (k > 0) cout<<"110";
            else cout<<"10";
            k--;
            }
        }
        if (arr[m + 1] != -1) {
            if (k > 0) cout<<"11"<<endl;
            else cout<<"1"<<endl;
        }
    }
    else cout<<"-1"<<endl;
    return 0;
}