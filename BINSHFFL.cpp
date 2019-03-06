#include<bits/stdc++.h>
using namespace std;
#define ll long long
int bit_count(ll n)
{
	int c;
	while(n)
	{
		c++;
		n=n&(n-1);
	}
	return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(bit_count(a) == bit_count(b))
		{
			cout<<b-a<<endl;
		}
		else 
	}
	return 0;
}
