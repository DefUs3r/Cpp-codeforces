#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long n;
    double X,Y;
    long long kount=1;
    cin>>n>>X>>Y;
    double m[n];
    for (long long int i = 0; i < n; ++i)
    {
    	double x,y;
    	cin>>x>>y;
        if (X-x==0)
            m[i]=100000000000000; 
        else
            m[i]=((Y-y)/(X-x)*1.0);
    	if (m[i]==-0)
    		m[i]=0;
    }
    sort(m,m+n);
    /*for (int i = 0; i < n; ++i)
    {
    	cout<<m[i]<<" ";
    }
    cout<<endl;
    */for (long long int i = 0; i < n-1; ++i)
    {
    	if (m[i]!=m[i+1])
    		kount++;
    }
    cout<<kount<<endl;
    return 0;
}