#include<bits/stdc++.h>
#define ull unsigned long long
#define rint register int
using namespace std;

int main()
{
    rint t;
    cin>>t;
    while(t--)
    {
        ull n,a,b,k;
        cin>>n>>a>>b>>k;
        ull jobs = n/a + n/b - 2*(n/((a*b)/__gcd(a,b)));
        if(jobs >= k)
            cout<<"Win\n";
        else cout<<"Lose\n";
    }
    return 0;
}
