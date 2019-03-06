#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];

    ll a_sum[n]={0},s=0;
    for(int i=1;i<n;i++)
    {
        s = (s+abs(a[i-1] - a[i]))%mod;
        a_sum[i-1] = s;
    }
    ll b_sum[n] = {0}, x = 0;

    for(int i = 1;i < n; i++)
    {
        x = (x+abs(b[i-1] - b[i]))%mod;
        b_sum[i-1] = x;
    }

    ll ans = a_sum[n-2];
    ll an2 = b_sum[n-2];
    for(int i = 0; i < n ; i++)
    {
        // cout<<a_sum[i]<<" ";
        cout<<b_sum[i]<<" ";
        ans = (ans + (ans - a_sum[i]))%mod;
        an2 = (an2 + (an2 - b_sum[i]))%mod;
    }
    ans = (ans + an2)%mod;
    cout<<ans<<"\n";
    return 0;
}
