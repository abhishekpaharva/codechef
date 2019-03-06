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
		if(n == 1)
		{
			cout<<"1 1\n";
		}
		else if(n%2 == 0)
		{
			cout<<"1 ";
			cout<<"1";
			for(int i=0;i<n/2;i++)
				cout<<"0";
			cout<<"\n";
		}
		else{
			cout<<"1 ";
			cout<<"1";
			for(int i=0;i<((n-1)/2);i++)
				cout<<"0";
			cout<<"\n";
		}
	}
	return 0;
}