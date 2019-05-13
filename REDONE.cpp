#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

ll f[1000001];

ll fact (ll n)
{
	if (n == 0 || n == 1)
		return f[n] = 1;
	if (f[n])
		return f[n] % mod;
	f[n] = ((n % mod) * (fact(n - 1) % mod)) % mod;
	return f[n];
}

int main ()
{
	ll t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		cout<<fact(n + 1) - 1<<"\n";
	}
	return 0;
}