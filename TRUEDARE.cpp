#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int tr;
		cin>>tr;
		int a;
		vector<bool>tr_h(101,false);
		for(int i=0;i<tr;i++)
		{
			cin>>a;
			tr_h[a] = true;
		}
		int dr;
		cin>>dr;
		vector<bool>dr_h(101,false);
		for(int i=0;i<dr;i++)
		{
			cin>>a;
			dr_h[a] = true;
		}
		
		int ts;
		cin>>ts;
		bool ans = true;
		for(int i=0;i<ts;i++)
		{
			cin>>a;
			if(tr_h[a] == false)
				ans = false;
		}
		int ds;
		cin>>ds;
		for(int i=0;i<ds;i++)
		{
			cin>>a;
			if(dr_h[a] == false)
				ans = false;
		}
		if(ans)
			cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}