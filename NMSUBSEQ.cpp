#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,c=0;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		s=a[i];
		for(int j=i+1;j<n;j++)
		{
			s+=a[j];
			if(s%5==0)
				c++;
		}
	}
	cout<<c<<"\n";
	return 0;
}