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
		int a,o=0,t=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a == 1)
				o++;
			else t++;
		}
		int min;
		if(t<o)
		    min = t;
		else min = o;
		int ans = (n*(n+1))/2 - t - o + 2 - t*o + min;
		cout<<ans<<"\n";
	}
	return 0;
}
