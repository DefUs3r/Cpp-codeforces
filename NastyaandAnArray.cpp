#include <bits/stdc++.h>
using namespace std;
int n,arr[3000010];
int func(int arr[])
{
	int temp=0;
	for (int i=0; i<300005; i++)
	{
		if (i==100005 || arr[i]==0) continue;
		else temp++;
	}
	return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for (int i=0; i<n; i++)
    {
    	int x; cin >> x;
    	arr[x+100005]++;
    }
    int ans=func(arr);
    cout << ans << endl;
}