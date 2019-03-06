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
#define mp make_pair
#define lop(i,a,n) for(rint i=a;i<n;i++)
#define rlop(i,a,n) for(rint i=a;i>=n;i--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

bool check(int f,int s,int x,int y)
{
	if(f >= 0 && f < x && s < y && s >= 0)
		return true;
	return false;
}

int main()
{
	rint t;
	cin>>t;
	while(t--)
	{
		rint n,m,f,s;
		cin>>n>>m;
		int a[n][m];
		lop(i,0,n)
			lop(j,0,m)
				a[i][j] = 0;
		stack<pair<int,int>>st;
		st.push(make_pair(n,m/2 + 1));
		while(!st.empty())
		{
			f = st.top().first;
			s = st.top().second;
			a[f][s] = m;
			if(check(f-1,s,n,m))
				st.push(mp(f-1,s));
			if(check(f+1,s,n,m))
				st.push(mp(f+1,s));
			if(check(f,s+1,n,m))
				st.push(mp(f,s+1));
			if(check(f,s-1,n,m))
				st.push(mp(f,s-1));
		}
		cout<<k<<"\n";
	}	
	return 0;
}
