#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int t=0;
		if(s.size() > 2)
		{
		    for(int i=0;i<s.size()-3;i++)
			    if(s[i] == '3')
				    t++;
		    int k=s.size()-1;
		    if(t == 3)
		        t--;
		    for(int i=0;i<3-t;i++)
		    {
    			if(s[k]>='3')
    			{
    			    if(k==0)
    			    {
    			        s = "0" + s;
    			        k++;
    			    }
    			    int m=k-1;
    			    while(s[m] == '9' && m>0)
    			    {
    			        s[m]=0;
    			        m--;
    			    }
    			    // if(m<0)
    			    // {
    			       // s = "1" + s;
    			       //  k++;
    			   // }
    			    //else s[m]++;
    				s[k]='3';
    			}
    			else{
    				s[k]='3';
    			}
    			k--;
    		}
		    cout<<s<<"\n";
		}
		else cout<<"333\n";
	}
	return 0;
}
