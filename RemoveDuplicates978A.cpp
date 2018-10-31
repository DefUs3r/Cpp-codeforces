#include <bits/stdc++.h>
using namespace std;
int arr[1005]={0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    int a[1005];
    for(int i=0;i<n;i++)
    {
    	cin >> a[i];
    	arr[a[i]]++;
    }
    int count=0;
    for(int i=0;i<1005;i++)
    {
    	if (arr[i]>0) count++;
    }
    int ans[count]={0},j=0;
    for (int i=0; i<n; i++)
    {
    	if (arr[a[i]]>0) arr[a[i]]--;
    	if (arr[a[i]]==0)
    	{
    		ans[j]=a[i];
    		j++;
    	}
    }
    cout << count << endl;
    for (int i=0; i<count; i++)
    	cout << ans[i] << " ";
    cout << endl;
    return 0;
}