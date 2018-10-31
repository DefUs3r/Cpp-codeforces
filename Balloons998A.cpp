#include <bits/stdc++.h>
using namespace std;
int ar[int(1e3+2)],suml[int(1e3+2)],sumr[int(1e3+2)];
int main()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> ar[i];
	}
	if (n==1) {cout << -1 << endl; return 0;}
	if (n==2)
	{
		if (ar[0]==ar[1]){cout << -1 << endl; return 0;}
		else {cout << 1 << endl << ar[0] << endl; return 0;}
	}
	sort(ar,ar+n);
	suml[0]=ar[0];sumr[n-1]=ar[n-1];
	for (int i=1; i<n; i++){suml[i]=suml[i-1]+ar[i];}
	for (int i=n-2; i>=0; i--){sumr[i]=sumr[i+1]+ar[i];}
	for (int i=0; i<n-1; i++)
	{
		if (suml[i]!=sumr[i+1]){cout << i+1 << endl;for (int j=0; j<i; j++){cout << ar[j] << " ";}cout << endl;return 0;}
	}
}