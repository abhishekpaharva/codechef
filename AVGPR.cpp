#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		vector<int>a(n);
		map<int,int>m;
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		    m[2*a[i]]=1;
		}
		for(int i=0;i<n/2;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(m[a[i]+a[j]] == 1)
				{
				    c++;
				}
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}