#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		string s;
		cin>>s;
		map<int,int>mp;
		mp[x] = 1;
		int cnt = 1;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'L')
				x--;
			else x++;
			if (mp[x] == 0)
				cnt++;
			mp[x]++;
		}
		cout<<cnt<<"\n";
	}
	return 0;
}