#include <bits/stdc++.h>
using namespace std;
#define flp(i,a,b) for (i=a;i<b;i++)

int i=0,j=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    char a[18],b[18];
    cin>>a>>b;
    char ans[18];
    int arr_a[strlen(a)],i,j;
    int arr_b[strlen(b)];
    flp (i,0,strlen(a))
    {
    	arr_a[i]=a[i]-'0';
    }
    flp (i,0,strlen(b))
    {
    	arr_b[i]=b[i]-0;
    }
    sort(arr_a.begin(),strlen(a));
    flp (i,0,strlen(b))
    {
    	if (strlen(a)==strlen(b))
    	{
    		for (j=0;j<strlen(b);j++)
    		{
    			if (arr_b[i])
    		}
    	}
    }
    return 0;
}

int check(char prep[18], char cmparr[18])
{
	long long int numprep=0;
	while (prep[i]!='\0')
	{
		numprep+=(prep[i]-'0')*pow(10,strlen(prep)-i);
	}
	long long numcmp=0,i=0;
	while(cmparr[i]!='0')
	{
		numcmp+=(cmparr[i]-'0')*pow(10,strlen(cmparr)-i);
	}
}