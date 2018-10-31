#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp(a,b) make_pair(a,b)
const long long int mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    char arr[4][n];
    for (int i=0; i<4; i++)
    {
    	for (int j=0; j<n; j++)
    		arr[i][j]='.';
    }
    cout << "YES" << endl;
    if (!(k%2))
    {
        for (int i=1; i<=k/2; i++)
        {
            arr[1][i]='#';
            arr[2][i]='#';
        }
    }
    else
    {
        if (k>n-2)
        {
            for (int i=1; i<=n-3; i++)
            {
                if (i<(n/2)) arr[2][i]='#';
                else arr[2][i+1]='#';
                k--;
            }
        }
        for (int i=(n-k)/2;i<n-(n-k)/2;i++)
        {
            arr[1][i]='#';
        }
    }
    for (int i=0; i<4; i++)
    {
    	for (int j=0;j<n;j++) 
    		cout << arr[i][j];
    	cout << endl;
    }
    cout << endl;
    return 0;
}