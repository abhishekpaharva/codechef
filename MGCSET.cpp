#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int sum=0,c=0,num=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
			    if(i==0 && j==n-1)
			        continue;
				for(int k=i;k<=j;k++)
				{
					for(int l=k;l<=j;l++)
					{
						num = num*10 + a[l];
						cout<<num<<" ";
						sum+=num;
					}
					num=0;
				}
				cout<<sum<<"\n";
				if(sum%m == 0)
					c++;
				sum=0;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}