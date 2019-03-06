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
        int a,d;
        map<int,int>h;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            h[a]++;
        }
        for(int i = 0; i < n; ++i)
        {
            cin>>d;
            h[d]--;
        }
        vector<int>p;
        int sum = 0;
        for(auto i = h.begin(); i != h.end(); i++)
        {
            sum += i->second;
            p.push_back(sum);
        }
        cout<<*max_element(p.begin(),p.end())<<"\n";
    }
    return 0;
}
