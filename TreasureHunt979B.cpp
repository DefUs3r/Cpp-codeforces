#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
ll strrep[3][300];
ll ans[3];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    ll n,x;
    cin >> n;
    char s[3][100005];
    for (ll i=0; i<3; i++)
    {
        cin >> s[i];
        ll length=strlen(s[i]);
        x=length;
        for (ll j=0; j<length; j++)
            strrep[i][s[i][j]]++;
    }
    for (ll i=0; i<3; i++)
    {
        for (char j='a'; j<='z'; j++)
        {
            ll y=x-strrep[i][j];
            if (n>y)
            {
                if (n==1 && y==0) ans[i]=max(ans[i],x-1);
                else ans[i]=max(ans[i],min(x,n+strrep[i][j]));
            }
            else ans[i]=max(ans[i],min(x,n+strrep[i][j]));
        }
        for (char j='A'; j<='Z'; j++)
        {
            ll y=x-strrep[i][j];
            if (n>y)
            {
                if (n==1 && y==0) ans[i]=max(ans[i],x-1);
                else ans[i]=max(ans[i],min(x,n+strrep[i][j]));
            }
            else ans[i]=max(ans[i],min(x,n+strrep[i][j]));
        }
    }
    if (ans[0]> ans[1] && ans[0]>ans[2])
    {
        cout << "Kuro" << endl;
        return 0;
    }
    if (ans[1]>ans[0] && ans[1]>ans[2])
    {
        cout << "Shiro" << endl;
        return 0;
    }
    if (ans[2]>ans[0] && ans[2]>ans[1])
    {
        cout << "Katie" << endl;
        return 0;
    }
    cout << "Draw" << endl;
    return 0;
}