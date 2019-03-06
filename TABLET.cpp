#include<bits/stdc++.h>
#define ull long long
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,b;
		cin>>n>>b;
		int p[n],w[n],h[n];

		for(int i = 0; i < n; i++)
			cin>>w[i]>>h[i]>>p[i];
		

		ull max = -1;
		for(int i = 0; i < n; i++)
		{
			if(max < w[i]*h[i] && p[i] <= b)
				max = w[i]*h[i];
		}
		if(max > -1)
			cout<<max<<"\n";
		else cout<<"no tablet\n";
	}
	return 0;
}