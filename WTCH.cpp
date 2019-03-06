#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        cin>>s;
        s1 = s;
        for(int i=0;i<n;i++)
        {
            if( ((i != n-1) && (s[i+1] == '1')) || ((i != 0) && (s[i-1] == '1')) )
                s1[i] = '1';
        }
        int z = 0,ans = 0;
        for(int i=0;i<n;i++)
        {
            if(s1[i] == '1')
            {
                ans += (z+1)/2;
                z = 0;
            }
            else z++;

        }
        ans += (z+1)/2;
        cout<<ans<<"\n";
    }
    return 0;
}
