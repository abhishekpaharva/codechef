#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int n,int k,int r)
{
	int max_sum=0,sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[(i+r)%n] == 1)
		{
		    sum++;
		    if(sum<=k)
		    max_sum = max(max_sum,sum);
		}
		else sum = 0;
	}
	return max_sum;
}
int main()
{
	int n,q,k;
	cin>>n>>q>>k;
	int a[n];
	string que;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>que;
	int r=0;
	for(int i=0;i<que.size();i++)
	{
		if(que[i] == '?')
		{
			cout<<sum(a,n,k,r)<<"\n";
		}
		else{
			r = (r+1)%n;
		}
	}
	return 0;
}
