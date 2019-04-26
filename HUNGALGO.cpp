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
		int a[n][n];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin>>a[i][j];

		bool rows = false, cols = false;

		for (int i = 0; i < n; i++)
		{
			bool rf = false, cf = false;
			for (int j = 0; j <n; j++)
			{
				if (a[i][j] == 0)
				{
					rf = true;
				}
				if (a[j][i] == 0)
				{
					cf = true;
				}
			}
			if (!rf)
				rows = true;
			if (!cf)
				cols = true;
		}
		if (rows || cols)
			cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}