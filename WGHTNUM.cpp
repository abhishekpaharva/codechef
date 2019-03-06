#include<bits/stdc++.h>
#define ull unsigned long long
#define mod 1000000007
using namespace std;
ull power(ull x, ull y)
{
    int res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ull t;
	cin>>t;
	ull c[10] = {9,8,7,6,5,4,3,2,1,0};
	ull k[10] = {9,9,8,7,6,5,4,3,2,1};
	while(t--)
	{
		ull n;
		int w,i;
		cin>>n>>w;
	    if((0 <= w) && (w <10))
	    {
			cout<<(c[w]*power(10,n-2))%mod<<"\n";
		}
		else if((-9 <= w ) && ( w<0 ))
		{
		    i = -1*w;
		    cout<<(k[i]*power(10,n-2))%mod<<"\n";
		}
		else cout<<0<<"\n";
	}
	return 0;
}