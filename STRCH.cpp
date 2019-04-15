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
		string s;
		char ch;
		cin>>s>>ch;
		long long ans = 0;
		vector<int>r;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == ch)
				r.push_back(i);
		}
		if (r.size() > 0)
		{
			for (int i = 0; i < r.size() - 1; i++)
			{
				ans += (r[i] + 1)*(r[i + 1] - r[i]);
			}
			ans += (r[r.size() - 1] + 1)*(s.size() - r[r.size() - 1]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}