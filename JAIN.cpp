#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL)
#define rint register int
#define ull unsigned long long

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



void debug(auto a[], rint n)
{
    for(rint i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

void debug(vector<auto>a)
{
    for (auto i : a)
    {
        cout<<i<<" ";
    }
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

        vector<short>value;
        set<short>s;
        vector<ull>count(33,0);

        for(rint i = 0; i < n; i++)
        {
            rint x = 0;
            for(rint j = 0; j < a[i].size(); j++)
            {
                x |= mp[a[i][j]];
            }
            if (s.find(x) == s.end())
            {   
                value.push_back(x);
                count[x] = 1;
                s.insert(x);
            }
            else count[x]++;
        }
        // debug(value);
        // debug(count);
        // debug(a,n);
        ull ans = 0;

        for(rint i = 0; i < value.size(); i++)
        {
            for(rint j = i + 1; j < value.size(); j++)
                if ((value[i]|value[j]) == 31)
                    ans += count[value[i]]*count[value[j]];
        }
        ans += (count[31]*(count[31] - 1))/2;
        // cout<<count[31]<<" ";
        cout<<ans<<"\n";
    }
    return 0;
}
