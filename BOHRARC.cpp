#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(ll n)
{
    for(ll i = 2; i*i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

bool is_semiprime(ll n)
{
    int cnt = 0;
    for(ll i = 2; cnt < 2 && i*i <= n; i++)
        if(n % i == 0)
            cnt++, n/=i;

    if (n > 1)
        cnt++;

    return cnt == 2;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if((n == 1) || is_prime(n) || is_semiprime(n))
            cout<<"No\n";
        else cout<<"Yes\n";
    }
}
