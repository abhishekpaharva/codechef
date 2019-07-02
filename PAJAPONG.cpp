#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		ll x,y,k;
		cin>>x>>y>>k;
		if ( (((x+y)/k) % 2) == 0 )
			cout<<"Chef\n";
		else cout<<"Paja\n";
	}
	return 0;
}