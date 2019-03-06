#include<bits/stdc++.h>
#define rint register int
#define ull unsigned long long
using namespace std;

int main()
{
    rint t;
    cin>>t;
    while(t--)
    {
        int a[26] = {0};
        string s;
        cin>>s;

        for(rint i = 0; i < s.size(); i++)
            a[s[i] - 'A']++;

        cout<<sum<<"\n";
    }
    return 0;
}
