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
    	long long int l[n],g[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>l[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    		cin>>g[i];
    	}
    	int front=1;
    	int back=1;
    	for (int i=0;i<n;i++)
    	{
    		if(l[i]>g[i])
    		{
    			front=0;
    			break;
    		}
    	}
    	for (int i=0;i<n;i++)
    	{
    		if(l[i]>g[n-1-i])
    		{
    			back=0;
    			break;
    		}
    	}
    	if(front==1)
    	{
    		if(back==1)
    		{
    			cout<<"both"<<endl;
    		}
    		else
    		{
    			cout<<"front"<<endl;
    		}
    	}
    	else
    	{
    		if(back==1)
    		{
    			cout<<"back"<<endl;
    		}
    		else
    		{
    			cout<<"none"<<endl;
    		}
    	}
    }
    return 0;
}