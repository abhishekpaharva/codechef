#include <bits/stdc++.h>

using namespace std;

bool is_valid (int i, int j, int r, int c)
{
	if (i < 0 || i >= r || j < 0 || j >= c)
		return false;
	return true;
}

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int r,c;
		cin>>r>>c;
		int a[r][c];
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin>>a[i][j];

		int x[] = {-1, 0, 0, 1};
		int y[] = {0, -1, 1, 0};
		bool f = true;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				int cnt = 0;
				for (int k = 0; k < 4; k++)
				{
					if (is_valid (i + x[k], j + y[k] , r, c))
						cnt++;
				}
				if (cnt <= a[i][j])
				{
					f = false;
					break;
				}
			}
			if (!f)
				break;
		}
		if (f)
			cout<<"Stable\n";
		else cout<<"Unstable\n";
	}
	return 0;
}