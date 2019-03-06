#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int w,a[n];
		for(int i=0;i<n;i++)
		{
			cin>>w;
			if(w <= k)
			{
				k -= w;
				a[i] = 1;
			}
			else a[i] = 0;
		}
		for(int i=0;i<n;i++)
			cout<<a[i];
		cout<<"\n";
	}
	return 0;
}
