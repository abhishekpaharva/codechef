#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>>m,k,l;
	int c[n],t[n];
	for(int i=0;i<n;i++)
		cin>>c[i];
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
		if(t[i] == 3)
			m.push_back(make_pair(c[i],t[i]));
		else if(t[i] == 2)
			k.push_back(make_pair(c[i],t[i]));
		else l.push_back(make_pair(c[i],t[i]));
	}
	vector<pair<int,int>>::iterator i;
	int mc = 1000000;
	int kc = 1000000;
	int lc = 1000000;
	for(i=m.begin();i!=m.end();i++)
	{
		if(mc>i->first)
			mc=i->first;
	}
	for(i=k.begin();i!=k.end();i++)
	{
		if(kc>i->first)
			kc=i->first;
	}
	for(i=l.begin();i!=l.end();i++)
	{
		if(lc>i->first)
			lc=i->first;
	}
	if(mc > (kc+lc))
		cout<<kc+lc<<"\n";
	else cout<<mc<<"\n";
	return 0;
}