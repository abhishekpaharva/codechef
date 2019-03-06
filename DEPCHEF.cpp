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
        rint n;
        cin>>n;
        int a[n],d[n],s[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        for(int i = 0; i < n; i++)
            cin>>d[i];
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
                s[i] = d[i] - a[n - 1] - a[i + 1];
            else if(i == n - 1)
                s[i] = d[i] - a[0] - a[n-2]; // - d[i];
            else s[i] = d[i] - a[i - 1] - a[i + 1]; // - d[i];
        }
        int max = -1;
        for(int i = 0; i <n ;i++)
        {
            if(s[i] > 0 && max < d[i])
                max = d[i];
        }
        if(max < -1)
            cout<<"-1\n";
        else cout<<max<<"\n";
    }
    return 0;
}
