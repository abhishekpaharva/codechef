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
	fastio;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n],b[n][n];
		lop(i,0,n)
			lop(j,0,n)
				cin>>a[i][j];
		lop(i,0,n)
			lop(j,0,n)
				cin>>b[i][j];
		int f = 0;
		lop(i,0,n)
		{
			lop(j,i+1,n)
			{
				int x1 = a[i][j];
				int y1 = a[j][i];
				int x2 = b[i][j];
				int y2 = b[j][i];
				if((x1 == x2 && y1 == y2) || (x1 == y2 && y1 == x2))
				{
					continue;
				}
				f = 1;
				break;
			}
			if(f)
				break;
		}
		if(f)
			cout<<"No\n";
		else cout<<"Yes\n";
	}
	return 0;
}