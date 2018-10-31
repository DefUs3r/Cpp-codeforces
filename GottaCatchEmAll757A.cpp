#include <bits/stdc++.h>
using namespace std;
const long long size=1e5+1;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    char arr[size];
    cin>>arr;
    long long countB=0;
    long long countu=0;
    long long countl=0;
    long long countb=0;
    long long counta=0;
    long long counts=0;
    long long countr=0;
    long long arr_char[7]={0};
    for (int i = 0; i < strlen(arr); ++i)
    {
    	if (arr[i]=='B')
    		arr_char[0]++;
    	else if (arr[i]=='u')
    		arr_char[1]++;
    	else if (arr[i]=='l')
    		arr_char[2]++;
    	else if (arr[i]=='b')
    		arr_char[3]++;
    	else if (arr[i]=='a')
    		arr_char[4]++;
    	else if (arr[i]=='s')
    		arr_char[5]++;
    	else if (arr[i]=='r')
    		arr_char[6]++;
    }
    arr_char[1]/=2;
    arr_char[4]/=2;
    long long wordcount=999999999;
    for (int i = 0; i < 7; ++i)
    {
    	if (arr_char[i]<=wordcount)
    		wordcount=arr_char[i];
    }
    cout<<wordcount<<endl;
    return 0;
}