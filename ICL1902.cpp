#include <bits/stdc++.h>

using namespace std;

int count_sq(int n)
{
	if (n > 0)
	{
		return count_sq(n - pow((int)floor(sqrt(n)),2)) + 1;
	}
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		cout<<count_sq(n)<<"\n";
	}
	return 0;
}