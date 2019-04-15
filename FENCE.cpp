#include <bits/stdc++.h>

using namespace std;

bool comp (pair<int,int>a, pair<int,int>b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

bool comp2 (pair<int,int>a, pair<int,int>b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		
		vector<pair<int,int>>a;
		int r,c;
		for (int i = 0; i < k; i++)
		{
			cin>>r>>c;
			a.push_back(make_pair(r,c));
		}

		sort(a.begin(), a.end(), comp);
		int ans = 2;
		for (int i = 1; i < k; i++)
		{
			if (a[i - 1].first != a[i].first)
				ans += 2;
			else if (a[i - 1].second != a[i].second - 1)
				ans += 2;
		}
		ans += 2;
		sort(a.begin(), a.end(), comp2);
		for (int i = 1; i < k; i++)
		{
			if (a[i - 1].second != a[i].second)
				ans += 2;
			else if (a[i - 1].first != a[i].first - 1)
				ans += 2;
		}
		cout<<ans<<"\n";

	}
	return 0;
}