#include<bits/stdc++.h>
using namespace std;

void build_segment(int a[],int l, int r, int seg[],int idx)
{
    if(l == r)
    {
        seg[i] = a[l];
        return seg[i];
    }

    int mid = (l + r)/2;
    build_segment(a, l, mid, seg, 2*idx + 1);
    build_segment(a, mid+1, l, seg, 2*idx + 2);
}

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n] = {0};
    int seg[n] = {0};
    build_segment(a, 0, n - 1, seg, 0);
    while(q--)
    {
        int t,a,b;
        cin>>t>>a>>b;
        if (t == 0)
        {
            update(seg,a,b,0);
        }
        else{
            cout<<get_sum(seg,a,b,0)<<"\n";
        }    
    }
    return 0;
}
