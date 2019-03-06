#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string name;
		cin>>n>>name;
		int zero=0,one=0;
		while(n--)
		{
			string s;
			cin>>s;
			for(int i=0;i<n;i++)
			{
				if(s[i] == '0')
					z++;
				else o++;
			}
			if(s[0] == '0')
				zero+=z;
			else one+=o;
		}
		if(name == 'Dee')
		{
			if(zero>one)
				cout<<"Dee\n";
			else cout<<"Dum\n";
		}
		else{
			if(one>zero)
				cout<<"Dum\n";
			else cout<<"Dum\n";
		}
	}
}
