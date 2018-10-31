#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,count25=0,count50=0,count100=0,fl=0;
    cin>>n;
    for (long long i = 0; i < n; ++i)
    {
    	long long num;
    	cin>>num;
    	if (num==25)
    	{
    		count25++;
    		fl=1;
    	}
    	else if (num==50 && count25>=1){
    		count50++;
    		count25--;
    		fl=1;
    	}
    	else if (num==100 && count25>=1 && count50>=1)
    	{
    		count100++;
    		count25--;
    		count50--;
    		fl=1;
    	}
    	else if (num==100 && count25>=3)
    	{
    		count100++;
    		count25-=3;
    		fl=1;
    	}
    	else{
    		fl=0;
    		break;
    	}
    }
    if (fl)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    return 0;
}