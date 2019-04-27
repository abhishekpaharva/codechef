#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		vector<pair<string,string>>name;
		string f,s;
		map<string,int>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>f>>s;
			mp[f]++;
			name.push_back(make_pair(f,s));
		}
		for (int i = 0; i < name.size(); i++)
		{
			if (mp[name[i].first] == 1)
				cout<<name[i].first<<"\n";
			else cout<<name[i].first<<" "<<name[i].second<<"\n";
		}
	}
	return 0;
}