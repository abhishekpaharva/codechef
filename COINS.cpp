#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll solution(ll n, ll* dp)
{
    if(n == 0 || n == 1)
        return dp[n] = n;
    if(dp[n])
        return dp[n];
    return dp[n] = max(n, solution(n/2, dp) + solution(n/3, dp) + solution(n/4, dp));
}

int main()
{
    ll n;
    while(cin>>n)
    {
        ll *dp = new ll[n];
        memset(dp,0,n);
        cout<<solution(n,dp)<<"\n";
    }
    return 0;
}
