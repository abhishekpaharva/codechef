#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin>>a[i];

		int ans = n + 1, idx, sum = 0;

		for (int i = 0; i < n; i++)
		{
			idx = 1;
			sum = 0;
			for (int j = i; j < n; j++)
			{
				sum += a[j]/idx;
				idx++;
			}
			if (sum <= k)
			{	
				ans = i + 1;
				break;
			}

		}
		cout<<ans<<"\n";
	}
	return 0;
}