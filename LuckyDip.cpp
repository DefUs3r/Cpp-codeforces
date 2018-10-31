#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    float occurences[200001]={0};
    for(int j=1;j<=t;j++)
    {
    	int n,k;
    	int v[n];
    	cin >> n >> k;
    	for (int i=0;i<n;i++)
    	{
    		cin >> v[i];
    		occurences[v[i]]++;
    	}
    	float maxm=-9999999999,count_max=0;
    	for (int i=0;i<n;i++)
    		maxm=(maxm,v[i]);
    	float expt=0;
    	if(count_max == n) count_max = expt;
    	else if (k != 0)
    	{
    		for (int i=0;i<n;i++)
    		{
    			if(occurences[v[i]]!=0)
    			{
    				if(v[i]==maxm)
    				{
    					float prob_max=float((n-occurences[v[i]])*1.0/n);
    					printf("n-occurences[v[i]]=%f\n", n-occurences[v[i]]);
    					printf("prob_max=%.6f\n", prob_max);
    					expt+=(1-pow(prob_max,k+1))*v[i];
    					printf("expt=%.6f\n", expt);
    				}
    				else
    				{
    					float prob=float(occurences[v[i]]*1.0/n);
    					expt+=prob*v[i];
    				}
    				occurences[v[i]]=0;
    			}
    			else continue;
    		}
    	}
    	if (k==0)
    	{
    		for (int i = 0; i < n; i++)
    		{
    			expt+=v[i];
    		}
    		expt=expt*1.0/n;
    	}
    	printf("Case #%d: %.6f\n",j,expt);
    }
    return 0;
}