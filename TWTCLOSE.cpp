#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,b,cnt = 0;
    string s;
    cin>>n>>k;
    bool btn[n+1];
    memset(btn,false,n+1);
    while(k--)
    {
        cin>>s;
        if(s == "CLICK")
        {
            cin>>b;
            btn[b] = !btn[b];
            // cout<<btn[b]<<" ";
            if(btn[b])
                cnt++;
            else cnt--;
        }
        else if(s == "CLOSEALL"){
            memset(btn,false,n+1);
            cnt = 0;
        }
        cout<<cnt<<"\n";
    }

    return 0;
}
