#include <bits/stdc++.h>
using namespace std;

int n,k,q,i,j;
int maxpr=-9999999,minpr=999999999;
int check[100];
int no_of_thm_per_card;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    no_of_thm_per_card=n/k;
    int count=0;
    vector<int> arr(n);
    for (i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    cin>>q;
    for (i=0;i<q;i++)
    {
    	int resp=0;
    	int pos,sum=0;
    	for (j=0;j<no_of_thm_per_card;j++)
    	{
    		cin>>pos;
    		pos--;//arr[] is 0 indexed
    		if(check[pos]==0 && resp==0)
    		{
    			count++;
    			resp=1;
    		}
    		check[pos]=1;
    		sum+=arr[pos];
    	}
    	maxpr=max(maxpr,sum);
    	minpr=min(minpr,sum);
    }
    //cout<<"minpr = "<<minpr<<endl;
    for (i = 0; i < n; i++)
    {
    	if (!check[i])
    		v.push_back(arr[i]);
    }
    sort(v.begin(), v.end());
    if (v.size()>=no_of_thm_per_card && count<k)
    {
    	int sumfront=0,sumback=0;
    	for (i=0;i<no_of_thm_per_card;i++)
    	{
    		sumfront+=v[i];
    		sumback+=v[v.size()-1-i];	
    	}
    	maxpr=max(maxpr,sumback);
    	minpr=min(minpr,sumfront);
    	//cout<<"minpr final = "<<minpr<<endl;
    }
    printf("%0.12lf %0.12lf\n", minpr*1.0/no_of_thm_per_card, maxpr*1.0/no_of_thm_per_card);
    return 0;
}