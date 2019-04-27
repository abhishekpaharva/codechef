#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print(ll a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main ()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n],b[n];
		for (ll i = 0; i < n; i++)
			cin>>a[i];
		for (ll i = 0; i < n; i++)
			cin>>b[i];
		ll suma[n + 1] = {0}, sumb[n + 1] = {0}, sa = 0,sb = 0;
		for (ll i = n - 1; i >= 0; i--)
		{
			sb += b[i];
			sumb[i] = sb;
		}
		for (int i = 0; i < n; i++)
		{
			sa += a[i];
			suma[i + 1] += sa;
		}
		ll sum = INT_MIN;
		for (int i = 1; i <= n; i++)
		{
			if (sum < suma[i - 1] + sumb[i - 1])
				sum = suma[i - 1] + sumb[i - 1];
		}
		if (sum < suma[n])
			sum = suma[n];
		cout<<sum<<"\n";
	}
	return 0;
}