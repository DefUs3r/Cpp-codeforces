//solve by stack


#include <bits/stdc++.h>
using namespace std;

long long top=-1,msg_stack[300005][2];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n,q,unread=0;
    cin>>n>>q;
    long long arr[q][2];
    for (long long i = 0; i < q; ++i)
    {
    	cin>>arr[0][q]>>arr[1][q];
    }
    for (i = 0; i < q; ++i)
    {
    	if (arr[0][i]==1)
    	{
    		top++;
    		msg_stack[top][0]=arr[1][i];
    		msg_stack[top][1]=1;
    	}
    	if (arr[0][i]==2)
    	{
    		if (unread>0)
    		{
    		}
    	}
    	if (arr[0][i]==3)
    	{
    	}
    }
    return 0;
}