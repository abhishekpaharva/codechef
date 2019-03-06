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
		int r,c;
		cin>>r>>c;
		if(r%2 == 0 || c%2 == 0)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}