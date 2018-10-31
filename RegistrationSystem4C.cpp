#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	char s[33];
    	cin>>s;
    	insert(s);
    	traverse_trie();
    }
    return 0;
}
void insert(char s[])
{
	//insert words into trie with counting how many times a word comes
}
void compression()
{
	//making trie efficient
}
void traverse_trie()
{
	//traversing and printing string. If repeat print string nd frequency. else okay.
}