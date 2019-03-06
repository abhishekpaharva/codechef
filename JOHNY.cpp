#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,s;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++)
		{	
			cin>>a[i];
		}
		cin>>k;
		s=a[k-1];
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++)
		{
		    if(a[i] == s)
		    {
		        cout<<i+1<<"\n";
		        break;
		    }
		}
	}
}