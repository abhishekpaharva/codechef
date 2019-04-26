#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int t;
	cin>>t;
	set<char>st;
	st.insert('c');
	st.insert('o');
	st.insert('d');
	st.insert('e');
	st.insert('h');
	st.insert('f');	
	map<char,int>meal;
	meal.insert(make_pair('c',2));
	meal.insert(make_pair('o',1));
	meal.insert(make_pair('d',1));
	meal.insert(make_pair('e',2));
	meal.insert(make_pair('h',1));
	meal.insert(make_pair('f',1));

	while (t--)
	{
		int n;
		cin>>n;
		string s;
		
		map<char,int>mix;
		mix.insert(make_pair('c',0));
		mix.insert(make_pair('o',0));
		mix.insert(make_pair('d',0));
		mix.insert(make_pair('e',0));
		mix.insert(make_pair('h',0));
		mix.insert(make_pair('f',0));

		while(n--)
		{
			cin>>s;
			for (int i = 0; i < s.size(); i++)
			{
				if (st.find(s[i]) != st.end())
					mix[s[i]]++;
			}
		}

		vector<int>a;
		for (auto i : mix)
		{
			a.push_back(i.second/meal[i.first]);
		}

		cout<<*min_element(a.begin(),a.end())<<"\n";

	}
	return 0;
}