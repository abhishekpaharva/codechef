#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin>>a[i];
		vector<int> sums;
		for (int i = 0; i < k && i < n; i++)
		{
			int s = a[i];
			for (int j = i + k; j < n; j += k)
			{
				if (a[j] <= s + a[j])
					s += a[j];
				else s = a[j];
			}
			sums.push_back(s);
		}
		cout<<*max_element(sums.begin(),sums.end())<<"\n";
	}
	return 0;
}