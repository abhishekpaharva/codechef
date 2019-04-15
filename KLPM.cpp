#include <bits/stdc++.h>

using namespace std;

bool ispal(string s)
{
	int i = 0;
	while (i <= s.size()/2)
	{
		if (s[i] != s[s.size() - 1 - i])
			return false;
		i++;
	}
	return true;
}

int main ()
{
	string s,sub1,sub2;
	cin>>s;
	int n = s.size();
	
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			sub1 = s.substr(i,j);
			for (int k = i + j; k < n; k++)
			{
				for (int l = 1; l <= n - k; l++)
				{
					sub2 = s.substr(k,l);
					if (ispal(sub1 + sub2))
						cnt++;
				}
			}
		}
	}
	cout<<cnt<<"\n";
	return 0;
}