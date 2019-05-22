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
		int a[n], d[n - 1];
		for (int i = 0; i < n; i++)
			cin>>a[i];
		for (int i = 1; i < n; i++)
			d[i - 1] = a[i] - a[i - 1];

		set<int>st;
		for (int i = 0; i < n - 1; i++)
			st.insert(d[i]);
		if (st.size() == 3)
		{
			int dif = (a[n - 1] - a[0])/(n - 1);
			for (int i = 1; i < n; i++)
				a[i] = a[i - 1] + dif;
			for (int i = 0; i < n; i++)
				cout<<a[i]<<" ";
		}
		else if (st.size() == 2)
		{
			if (d[0] != d[1])
				a[0] = a[1] - d[1];
			else if (d[n - 2] != d[n - 3])
				a[n - 1] = a[n - 2] + d[n - 3];
			for (int i = 0; i < n; i++)
				cout<<a[i]<<" ";
		}
		else {
			for (int i = 0; i < n; i++)
				cout<<a[i]<<" ";
		}
		cout<<"\n";

	}
	return 0;
}