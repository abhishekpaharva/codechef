#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,n;
	cin>>s>>n;
	for(int i=0;i<s.size();i++)
	{
		if(n[i] == '+')
		{
			if(s[i]!='z')
				s[i]++;
			else s[i] = 'a';
		}
	}
	cout<<s;
	return 0;
}