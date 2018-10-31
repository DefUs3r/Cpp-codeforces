#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
ll x,y;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> x >> y;
    if (x==y)
    {
    	cout << "=" << endl;
    	return 0;
    }
    if (x==1)
    {
    	cout << "<" << endl;
    	return 0;
    }
    if (y==1)
    {
    	cout << ">" << endl;
    	return 0;
    }
    if (max(x,y)>11)
    {
    	if (x<y)
    	{
    		cout << ">" << endl;
    		return 0;
    	}
    	if (y<x)
    	{
    		cout << "<" << endl;
    		return 0;
    	}
    }
    else
    {
    	ll tempx=1,tempy=1;
    	for (int i=1;i<=y;i++)
    	{
    		tempx*=x;
    	}
    	for (int i=1;i<=x;i++)
    	{
    		tempy*=y;
    	}
    	if (tempx<tempy)
    	{
    		cout << "<" << endl;
    	}
    	else if (tempx==tempy)
    	{
    		cout << "=" << endl;
    	}
    	else
    	{
    		cout << ">" << endl;
    	}
    	return 0;
    }
}