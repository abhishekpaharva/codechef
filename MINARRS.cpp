#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin>>a[i];
		int bit[32] = {0};
		for (int i = 0; i < n; i++)
		{
			for (int j = 31; j >= 0; j--)
			{
				if (a[i] & 1 << j)
					bit[j]++;
			}
		}
		int num = 0;
		for (int i = 0; i < 32; i++)
		{
			if (bit[i] != 0 && bit[i] > (n - bit[i]))
				num += (1 << i);
		}
		ll sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += a[i]^num;
		}
		cout<<sum<<"\n";
	}
	return 0;
}