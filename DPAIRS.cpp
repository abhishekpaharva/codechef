#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define ld long double
#define mod 1000000007
#define bit_cnt __builtin_popcount
#define vi vector<int>
#define vb vector<bool>
#define umap unordered_map
#define lop(i,a,n) for(int i=a;i<n;i++)
#define rlop(i,a,n) for(int i=a;i>=n;i--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

bool camp(pair<int,int> a,pair<int,int> b)
{
	return a.first < b.first;
}

int main()
{
	fastio;
	int n,m,x;
	cin>>n>>m;
	vector<pair<int,int>> a,b;
	lop(i,0,n)
	{
		cin>>x;
		a.push_back(make_pair(x,i));
	}
	lop(i,0,m)
	{
		cin>>x;
		b.push_back(make_pair(x,i));
	}
	sort(a.begin(),a.end(),camp);
	sort(b.begin(),b.end(),camp);
	int i=0,j=m-1,l=n-1,mn=0;
	lop(k,0,n+m-1)
	{
		if( j > -1 && i < n )
		{
			cout<<a[i].second<<" "<<b[j].second<<"\n";
			cout<<"---------------\n";
			cout<<i<<" "<<j<<"\n";
			i = i++;
			j = j--;
		}
		else{
			cout<<a[l].second<<" "<<b[mn].second<<"\n";
			l--;
			mn++;
		}
	}

	return 0;
}