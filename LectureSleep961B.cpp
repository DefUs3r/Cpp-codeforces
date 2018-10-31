#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n,k;
int proc[int(1e5+5)];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    int ar[n];
    int Min[n];
    int ttl=0;
    for (int i=0; i<n; i++){cin >> ar[i];}
    for (int i=0; i<n; i++){cin >> Min[i];}
    for (int i=0; i<n; i++)
    {
        if (i) proc[i]+=proc[i-1];
        if (Min[i]==0)proc[i]+=ar[i];
        else ttl+=ar[i];
    }
    int res=0;
    for (int i=0; i<n; i++)
    {
        if (i>=k)res=max(res,proc[i]-proc[i-k]);
        else res=max(res,proc[i]);
    }
    cout << ttl+res << endl;
    return 0;
}