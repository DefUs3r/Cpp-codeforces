#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	if (k==0||k==n)cout << "0 ";
	else cout << "1 ";
	if (k<=n/3)cout << k*2;
	else if (k-n/3<=n%3 && (k-n/3)>0) cout << n/3*2+n%3-(k-n/3);
	else cout << 2*(n/3)-(k-n/3-n%3);
}