#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n;
		cin>>n;
		ll a, o1 = 0, o2 = 0, e1 = 0, e2 = 0;
		ld sum = 0;
		for (ll i = 0; i < n; i++)
		{
			cin>>a;
			if (a % 2 == 0)
				e1++;
			else o1++;
			sum += a;
		}
		for (ll i = 0; i < n; i++)
		{
			cin>>a;
			if (a % 2 == 0)
				e2++;
			else o2++;
			sum += a;
		}
		ll ans = (ll)(sum/2 - (ld)(n - (min(o1,o2) + min(e1,e2)))/2);
		cout<<ans<<"\n";
	}
	return 0;
}