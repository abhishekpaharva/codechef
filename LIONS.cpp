#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool comp(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.first > b.first;
}

bool comp2(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.second > b.second;
}

int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll x[n],y[n];
    vector<pair<ll,ll>>h;
    for(ll i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for(ll i=0;i<n;i++)
    {
        h.push_back(make_pair(x[i],y[i]));
    }
    sort(h.begin(),h.end(),comp);
    ll sum = 0;
    for(ll i=0;i<n;i++)
    {
        if(i < a)
            sum += h[i].first;
        else sum += h[i].second;
    }
    ll sum1 = 0;
    sort(h.begin(),h.end(),comp2);
    for(ll i=0;i<n;i++)
    {
        if(i<b)
        {
            sum1 += h[i].second;
        }
        else sum1 += h[i].first;
    }
    cout<<max(sum,sum1)<<"\n";
    return 0;
}
