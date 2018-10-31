#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    char inp[101];
    scanf("%s",inp);
    int arr[101]={0};
    for (int i = 0; i < strlen(inp); ++i)
    {
    	if (inp[i]=='Q')
    		arr[i]=1;
    	if (inp[i]=='A')
    		arr[i]=2;
    }
    int i=0,j=0,k=0,count=0;
    while(i<strlen(inp))
    {
    	j=i+1;
    	if (arr[i]==1)
    	{
    		while (j<strlen(inp))
    		{
    			k=j+1;
    			if (arr[j]==2)
    			{
    				while (k<strlen(inp))
    				{
    					if (arr[k]==1)
    						count++;
    					k++;
    				}
    			}
    			j++;
    		}
    	}
    	i++;
    }
    cout<<count<<endl;
    return 0;
}