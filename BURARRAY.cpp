#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll n,Q;
		cin>>n>>Q;
		set<ll>ss;
		ll sum = 0;
		int ty,p,q,y,l,r;
		while (Q--)
		{
			cin>>ty;
			if (ty == 1)
			{
				cin>>y;
				ss.insert(y + sum);
			}
			else {
				cin>>p>>q;
				l = p + sum;
				r = q + sum;
				while (ss.find(r) != ss.end() && l <= r)
					r--;

				if (r < l)
				{
					cout<<"0\n";
					r = 0;
				}
				else cout<<r<<"\n";
				sum = (sum + r)%n;
			}
		}
	}
	return 0;
}