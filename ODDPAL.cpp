#include<bits/stdc++.h>
using namespace std;
bool ispal(string s)
{
	int n = s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i] != s[n-i-1])
			return false;
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		char c[100000];
		int k=0;
		cin>>s;
		for(int i=0;i<s.size();i+=2)
		{
			c[k++]=s[i];
		}
		if(ispal(c))
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}