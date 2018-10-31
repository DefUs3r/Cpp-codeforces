#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define pb push_back
#define mp make_pair
const long long int mod=1e9+7;
bool flagp,flagg,flagb,flago,flagr,flagy;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
    	string s;
    	cin >> s;
    	if (s[0]=='r') flagr=true;
    	if (s[0]=='p') flagp=true;
    	if (s[0]=='y') flagy=true;
    	if (s[0]=='g') flagg=true;
    	if (s[0]=='b') flagb=true;
    	if (s[0]=='o') flago=true;
    }
    cout << 6-n << endl;
    if (!flagr) cout << "Reality" << endl;
    if (!flagp) cout << "Power" << endl;
    if (!flagy) cout << "Mind" << endl;
    if (!flagg) cout << "Time" << endl;
    if (!flagb) cout << "Space" << endl;
    if (!flago) cout << "Soul" << endl;
    return 0;
}