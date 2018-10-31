#include <bits/stdc++.h>
using namespace std;
long long int n,arr[200005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cin >> arr[0];
    for (long long int i=1; i<n; i++)
    {
    	long long int x;
    	cin >> x;
    	arr[i]=arr[i-1]+x;
    }
    long long j=0,temp=arr[n-1];
    while (2*arr[j]<temp)
    {
    	j++;
    }
    cout << j+1 << endl;
    return 0;
}