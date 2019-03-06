#include<bits/stdc++.h>
#define rint register int
#define ull unsigned long long
#define ll long long
#define ld long double
#define mod 1000000007
#define bit_cnt __builtin_popcount
#define vi vector<int>
#define vb vector<bool>
#define umap unordered_map
#define lop(i,a,n) for(rint i = a; i < n; i++)
#define rlop(i,a,n) for(rint i = a; i >= n; i--)
#define vlop(a) for(auto i = a.begin(); i != a.end(); i++)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,c,k;
		cin>>r>>c>>k;
		int n = min(k,r - 1) + min(k,8 - r) + 1;
		int m = min(k,c - 1) + min(k,8 - c) + 1;
		cout<<n*m<<"\n";
	}
	return 0;
}