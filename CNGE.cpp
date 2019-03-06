#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int f = 0,h = 0,h2 = 0;
    bool flag = true;
    while(n--)
    {
        cin>>x;
        if(x == 50)
            f++;
        if(x == 100)
        {
            if(f > 0)
                f--;
            else flag = false;
        }
        if(x == 200)
        {
            if(h > 1 && f > 0)
                h--,f--;
            else if(f > 2)
                f -= 2;
            else flag = false;
        }
    }
    if(flag)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
