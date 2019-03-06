#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,r,c;
        cin>>n>>k;
        set<int>row,col;
        for(int i=0;i<k;i++)
        {
            cin>>r>>c;
            row.insert(r-1);
            col.insert(c-1);
        }
        vector<int> rows,cols;
        for(int i = 0; i < n; i++)
        {
            if(row.find(i) == row.end())
                rows.push_back(i);
            if(col.find(i) == col.end())
                cols.push_back(i);
        }
        sort(rows.begin(),rows.end());
        sort(cols.begin(),cols.end());
        auto rw = rows.begin();
        auto cl = cols.begin();
        cout<<min(rows.size(),cols.size())<<" ";
        while( (rw != rows.end()) && (cl != cols.end()) )
        {
            cout<<*rw+1<<" "<<*cl + 1<<" ";
            rw++;
            cl++;
        }
        cout<<"\n";
    }
    return 0;
}
