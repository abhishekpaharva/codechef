#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		int p[n],c[n],f=0;
		for(int i=0;i<n;i++)
			cin>>p[i];
		for(int i=0;i<n;i++)
			cin>>c[i];
		for(int i=0;i<n;i++)
		{
			if((p[i] > (x-y)) && ((p[i]*(x-y)/c[i]) <= k))  
			{
				f=1;
				break;
			}
		}
		if(f)
			cout<<"LuckyChef\n";
		else cout<<"UnluckyChef\n";
	}
	return 0;
}
