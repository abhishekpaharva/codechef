#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,t;
	cin>>x>>y>>t;
	while(t--)
	{
		int s=0;
		string n;
		bool px=false,py=false;
		cin>>n;
		for(int i=0;i<n.size();i++)
		{
		    s+=(n[i] - '0');
		    if(n[i] == (x+'0'))
		        px = true;
		    if(n[i] == (y+'0'))
		       py=true;
		}
		if(px && py)
			cout<<s<<"\n";
		else  cout<<n.size()<<"\n";
	}
}