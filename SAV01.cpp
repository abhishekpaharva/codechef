#include<bits/stdc++.h>
using namespace std;
void get_medians(vector<string> a, int n)
{
    priority_queue<string> s;
    priority_queue<string,vector<string>,greater<string> > g;
    string med = a[0];
    s.push(a[0]);
    cout<<med<<".0\n";
    for (int i=1; i < n; i++)
    {
        string x = a[i];
        if (s.size() > g.size())
        {
            if (x < med)
            {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else
                g.push(x);

            med = to_string((stod(s.top()) + stod(g.top()))/2.0);
        }

        else if (s.size()==g.size())
        {
            if (x < med)
            {
                s.push(x);
                med = s.top();
            }
            else
            {
                g.push(x);
                med = g.top();
            }
        }
        else
        {
            if (x > med)
            {
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            else
                s.push(x);
            med = to_string((stof(s.top()) + stof(g.top()))/2.0);
        }
        float ans = stof(med);
        printf("%.1f\n",ans);
    }
}
int main()
{
    int n;
    cin>>n;
    string x;
    vector<string>a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    get_medians(a,n);
    return 0;
}
