#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector <long long int> arr(n);
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	long long int opn=0;
    	sort(arr.begin(),arr.end());
    	for(int i=0;i<n-1;i++)
    	{
    		if(arr[i]==arr[i+1])
    		{
    			opn++;
    		}
    	}
    	cout<<opn<<endl;
    }
    return 0;
}