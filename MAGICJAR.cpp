#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    ull t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        ull a,sum = 0;
        for(ull i = 0; i < n; i++)
        {
            cin>>a;
            sum += a;
        }
        cout<<sum - n + 1<<"\n";
    }
    return 0;
}
