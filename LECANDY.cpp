#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,a,sum=0;
		cin>>n>>c;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			sum+=a;
		}
		if(sum<=c)
			cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
