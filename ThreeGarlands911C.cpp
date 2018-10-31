#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3],count2=0,count3=0,count4=0,i=0,fl=0;
    for (i=0;i<3;i++)
    {
    	cin>>arr[i];
    	if (arr[i]==1)
    		fl=1;
    	if (arr[i]==2)
    		count2++;
    	if (arr[i]==3)
    		count3++;
    	if (arr[i]==4)
    		count4++;
    }
    if (count2>=2)
    	fl=1;
    if (count3==3)
    	fl=1;
    if (count2==1)
    	if (count4==2)
    		fl=1;
    if (fl)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    return 0;
}