#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	cin>>n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	int f_max = a[0], s_max = a[0];

	for (int i = 1; i < n; i++)
	{
		if (f_max < a[i])
		{
			s_max = f_max;
			f_max = a[i];
		}
		else if (s_max < a[i] && f_max != a[i])
		{
			s_max = a[i];
		}
	}
	cout<<s_max%f_max<<"\n";
	return 0;
}