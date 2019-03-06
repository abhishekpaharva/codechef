#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],min = INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++)
		{
			if(min > abs(a[i+1] - a[i]))
		        min = abs(a[i+1] - a[i]);
		}
		cout<<min<<"\n";
	}
	return 0;
}
