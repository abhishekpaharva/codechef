#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define ld long double
#define mod 1000000007
#define bit_cnt __builtin_popcount
#define vi vector<int>
#define vb vector<bool>
#define umap unordered_map
#define lop(i,a,n) for(register int i=a;i<n;i++)
#define rlop(i,a,n) for(register int i=a;i>=n;i--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;


int main()
{
	fastio;
	ull t;
	cin>>t;
	while(t--)
	{
		ull n,p;
		cin>>n>>p;
		ull md = n%(n/2 + 1);
		ull a = p - md;
		ull m = 1;
		ull b = p - n;
		ull ans = m*a*a + b*m*a + b*b*m;
		if(md == 0)
			ans = p*p*p;
		cout<<ans<<"\n";
	}
	return 0;
}
