#include <bits/stdc++.h>
using namespace std;

bool check(long long int n)
{
	bool flag=true;
	long long int temp=n;
	while(temp>0)
	{
		if ((temp%10)%2==1)
		{
			flag=false;
			break;
		}
		else temp/=10;
	}
	return flag;
}
long long int find_min(long long int n)
{
	long long int ahead=0,behind=0;
	while(check(n+ahead)==false)
		ahead++;
	while(check(n-behind)==false)
		behind++;
	return min(ahead,behind);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
    	long long int n;
    	cin >> n;
    	long long int ans=find_min(n);
    	cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}