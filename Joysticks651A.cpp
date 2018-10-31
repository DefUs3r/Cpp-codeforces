#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int joy1,joy2,tym=0;
    cin>>joy1>>joy2;
    for (int i=0;joy1>=0 && joy2>=0;i++)
    {
    	int test1=joy1-2,test2=joy2-2;
    	cout<<test1<<" "<<test2<<endl;
    	if (test1<=0)
    	{
    		joy1++;
    		joy2-=2;
    	}
    	if (test2<=0)
    	{
    		joy1++;
    		joy2-=2;
    	}
    	if (joy1<=joy2)
    	{
    		while (joy2-2<=0)
    		{
    			joy1++;
    			joy2-=2;
    		}
    	}
    	if (joy2<joy1)
    	{
    		while (joy1-2<=0)
    		{
    			joy2++;
    			joy1-=2;
    		}
    	}
    	tym=i;
    	cout<<"joy 1 at "<<joy1<<" joy 2 at "<<joy2<<endl;
    }
    cout<<tym<<endl;
    return 0;
}