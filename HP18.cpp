#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define ld long double
#define mod 1000000007
#define bit_cnt __builtin_popcount
#define vi vector<int>
#define vb vector<bool>
#define umap unordered_map
#define loop(i,a,n) for(int i=a;i<n;i++)
#define rloop(i,a,n) for(int i=a;i>=n;i--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,x,bob=0,alice=0;
		cin>>n>>a>>b;
		loop(i,0,n)
		{
			cin>>x;
			if(x%a == 0)
				bob++;
			else if(x%b == 0)
				alice++;
		}
		if(bob > alice)
			cout<<"BOB\n";
		else cout<<"ALICE\n";
	}
	return 0;
}
