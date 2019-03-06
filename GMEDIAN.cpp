#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define mod 1000000007

ull power(ull n)
{
	if(n == 0)
		return 1;
	ull p = power(n/2);
	if(n%2 == 0)
		return (p*p)%mod;
	else return (2*p*p)%mod;
}

ull ncr[1000][1000];
ull nCr(ull n, ull r)
{
    if(r == 0 || n == r)
        return ncr[n][r] = 1;
    if(r == 1)
        return ncr[n][r] = n;
    if(ncr[n][r])
        return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r) + nCr(n-1,r-1))%mod;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int c=power(n-1);
		vector<bool>hash(2*n+1,false);
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			ull com = 0;
			if(hash[a[i]])
			{
				int l = i-1;
				int r = n-i-1;
				for(int i=0;i<=min(l,r);i++)
				{
					com = (com+nCr(l,i)*nCr(r,i))%mod;
				}
				c=(c+com)%mod;
			}
			else hash[a[i]] = true;
		}
		cout<<c<<"\n";
	}
	return 0;
}
