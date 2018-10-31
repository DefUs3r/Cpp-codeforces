#include <bits/stdc++.h>
using namespace std;

long long n,x,i;
long long pairs=0;
std::map<int, int> arr;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    pairs=0;
    for (i=0;i<n;i++)
    {
    	int num;
    	cin>>num;
    	pairs+=arr[x^num];
    	arr[num]++;
    }
   /* for (i=0;i<v.size();i++)
    {
    	int xorans;
    	xorans=x^(v[i]);
    	if (arr[xorans]>0)
    		pairs+=arr[xorans];
    }*/
    cout<<pairs<<endl;
    return 0;
}