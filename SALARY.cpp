#include<bits/stdc++.h>
using namespace std;
int min_max(int a[], int n, string s)
{
	if(s == "min")
	{
		int min_idx = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[min_idx] > a[i])
				min_idx = i;
		}
		return min_idx;
	}
	else{
		int max_idx = 0;
		for(int i=0;i<n;i++)
		{
			if(a[max_idx] < a[i])
				max_idx = i;
		}
		return max_idx;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min = min_max(a,n,"min");
		int max = min_max(a,n,"max");
		int ans=0,d;
		while(a[min] != a[max])
		{
			d=a[max]-a[min];
		    	ans += d;
			for(int i=0;i<n;i++)
			{
				if(i != max)
				{
					a[i] += d;
				}
			}
			min = min_max(a,n,"min");
			max = min_max(a,n,"max");
		}
		cout<<ans<<"\n";
	}
	return 0;
}
