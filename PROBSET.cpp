#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s,test,ans="FINE";
		for(int i=0;i<n;i++)
		{
			cin>>s>>test;
			int sol=1;
			for(int i=0;i<m;i++)
			{
			    if(test[i] != '1')
				{
				    sol = 0;
				    break;
				}
		    }
			if(s == "correct" && sol == 0)
			{
				ans = "INVALID";
			}
			if(s == "wrong" && sol == 1 && ans != "INVALID")
			{
				ans = "WEAK";
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
