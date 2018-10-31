#include <bits/stdc++.h>
/*#include <climits.h>*/
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i=0;
    cin>>n;
    long long arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    long long int min=999999999999999999;
    long long int distmin=999999999999999999;
    for (i = 0; i < n; ++i)
    {
        if (arr[i]<=min)
            min=arr[i];
    }
    vector<long long> minindex;
    for (i = 0; i < n; i++)
    {
        if (arr[i]==min)
            minindex.push_back(i);
    }
    /*for (i=0;i<n;i++)
    {
        cout<<minindex[i]<<endl;
    }*/
    //cout<<min<<endl;
    //vector<long long> minindex::iterator it;
    for (i = 0; i < minindex.size()-1 ; i++)
    {
        if (minindex[i+1]-minindex[i]<distmin)
            distmin=minindex[i+1]-minindex[i];
    }
    cout<<distmin<<endl;
    return 0;
}