#include<bits/stdc++.h>
using namespace std;
vector<int>x(26,0);

int find_X(int n)
{
	if(n == 1||n == 2)
		return x[n];
	if(x[n])
		return x[n];
	x[n] = 2*find_X(n-2) + find_X(n-1);
	return x[n];
}

int find_Y(int n)
{
	return 1<<n;
}

int main()
{
	x[1] = 1;
	x[2] = 1;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<find_X(n)<<" "<<find_Y(n)<<" ";
	}
	return 0;
}
