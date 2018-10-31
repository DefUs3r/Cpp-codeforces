#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b,c;
  cin>>a>>b>>c;
  int test;
  test=c;
  int i=1,fl=1;
  while((test-(b*i))>=0)
  {
    if ((test-(b*i))%a==0)
      fl=0;
    i++;
  }
  test=c,i=1;
  while((test-(i*a))>=0)
  {
    if ((test-(a*i))%b==0)
      fl=0;
    i++;
  }
  if (fl) {
    cout<<"No"<<endl;
  }
  else
    cout<<"Yes"<<endl;
  return 0;
}
