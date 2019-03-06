#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll p = powl(2,n-1) - 1;
        cout<<p<<"/"<<p+1<<"\n";
    }
    return 0;
}
