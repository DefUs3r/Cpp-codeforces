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
    	int price[n];
    	int quantity[n];
    	int discount[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>price[i]>>quantity[i]>>discount[i];
    	}
    	double loss=0;
    	for(int i=0;i<n;i++)
    	{
    		loss+=((price[i]*pow(discount[i],2)*quantity[i]));
    	}
    	loss=loss/10000;
    	printf("%.12lf\n",loss);
    }
    return 0;
}