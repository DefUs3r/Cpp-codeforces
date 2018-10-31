#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int> >fact;
void factor(int x)
{
	fact.clear();
	int q=1;
	for (int i=2; i<=x; i+=q, q = 2)
		if (!(x%i))
		{
			fact.push_back(make_pair(i,0));
			while(!(x%i))
			{
				x/=i;
				fact.back().second++;
			}
		}
	if (x!=1) fact.push_back(make_pair(x,1));
}
vector <int> divi;
void divis(int x=0, int ans=1)
{
	if (x==(int)fact.size())
	{
		divi.push_back(ans);
		return;
	}
	for (int i=0; i<=fact[x].second; i++)
	{
		divis(x+1,ans);
		ans *= fact[x].first;
	}
}
vector<int> gcd_store(int a, int b)
{
	factor(a);divi.clear();divis();
	vector<int> Div1 = divi;
	factor(b);divi.clear();divis();
	vector<int> Div2 = divi;
	sort(Div1.begin(), Div1.end());
	sort(Div2.begin(), Div2.end());
	vector<int> res;
	set_intersection(Div1.begin(), Div1.end(), Div2.begin(), Div2.end(), inserter(res,res.begin()));
	return res;
}
int main()
{
	int a,b,n;
	cin >> a >> b;
	vector <int> gcd = gcd_store(a,b);
	cin >> n;
	int hi,lo,i=0;
	while (i<n)
	{
		cin >> lo >> hi;int pos=-1;
		for (int j=gcd.size()-1;j>=0;j--)
		{
			if (gcd[j]>=lo && gcd[j]<=hi)
			{
				pos=j;
				break;
			}
		}
		// cout << pos << endl;
		if (pos == -1) {cout << "-1" << endl;}
		else cout << gcd[pos] << endl;
		i++;
	}
}