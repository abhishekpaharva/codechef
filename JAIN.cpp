#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define rint register int

using namespace std;

map<char,int>mp;

void build()
{
    mp.insert(make_pair('a',16));
    mp.insert(make_pair('e',8));
    mp.insert(make_pair('i',4));
    mp.insert(make_pair('o',2));
    mp.insert(make_pair('u',1));
}



void debug(int a[], rint n)
{
    for(rint i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

void print(auto a)
{
    cout<<a<<"\n";
}

int main()
{
    fastio;
    build();
    rint t;
    cin>>t;
    while(t--)
    {
        rint n;
        cin>>n;

        string a[n];
        for(rint i = 0; i < n; i++)
            cin>>a[i];
        int value[n] = {0};

        for(rint i = 0; i < n; i++)
        {
            for(rint j = 0; j < a[i].size(); j++)
            {
                value[i] |= mp[a[i][j]];
            }
        }
        rint cnt = 0;
        // debug(value,n);

        for(rint i = 0; i < n; i++)
            for(rint j = i + 1; j < n; j++)
                if ((value[i]|value[j]) == 31)
                    cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}
