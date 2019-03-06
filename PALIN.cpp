#include<bits/stdc++.h>
using namespace std;


string nxt_palin(string s)
{
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if (s[i] > s[n - i])
        {
            s[n - i] = s[i]
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string num;
        cin>>num;
        cout<<nxt_palin(num)<<"\n";
    }
    return 0;
}
