#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int t;
		int a[26]={0},k=0,flag=1;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(a[s[i]-'a'] == 0)
				k++;
			a[s[i]-'a']++;
		}
		sort(a,a+26);
		if(k>=3)
		{
			for(int i=26-k+2;i<26;i++)
			{
				if(a[i] != (a[i-2] + a[i-1]))
				{
					flag=0;
					break;
				}
			}
		}
		if(flag)
			cout<<"Dynamic\n";
		else cout<<"Not\n";
	}
	return 0;
}
