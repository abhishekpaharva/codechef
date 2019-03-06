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
		int a[n];
		int h=0,c=0;
		for(int i=0;i<n;i++)
		{	
			cin>>a[i];
			if(a[i] - h > k)
			{
			    c += (a[i]-h)/k;
			    if((a[i] - h)%k==0)
			        c--;
			}
			h = a[i];
		}
		cout<<c<<"\n";
	}
	return 0;
}
