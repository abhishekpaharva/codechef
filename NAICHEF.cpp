#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a,b,x,ca=0,cb=0;
		scanf("%d%d%d",&n,&a,&b);
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x == a)
				ca++;
			if(x == b)
				cb++;
		}
		float ans = (float)(ca*cb)/(float)(n*n);
		cout<<ans<<"\n";
	}
	return 0;
}
