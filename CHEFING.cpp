#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt = 0;
        cin>>n;
        int a[26] = {0};
        for(int j = 0; j < n; j++)
        {
            string s;
            vector<bool>hash(26,true);
            cin>>s;
            for(int i = 0; i < s.size(); i++)
            {
                if(hash[s[i] - 'a'])
                    a[s[i] - 'a']++,hash[s[i] - 'a'] = false;
            }
        }
        for(int i = 0; i < 26; i++)
            if(a[i] == n)
                cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}
