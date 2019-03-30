#include <bits/stdc++.h>

using namespace std;

bool travel(int a[], bool v[], int idx, int n, int d)
{
	v[idx] = true;
	for (int i = 0; i < n; i++)
	{
		if (v[i] == false)
		{
			if ((abs(a[i] - a[idx]) <= d))
				if (!travel(a,v,i,n,d))
					v[i] = false;
		}
	}

	bool f = true;
	for(int i = 0; i < n; i++)
	{
		if (!v[i])
			f = false;
	}
	if (f)
		return true;
	else return false;

}

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,d;
		cin>>n>>d;
		int a[n];
		for (int i = 0; i < n; i++)
			cin>>a[i];

		bool visit[n];
		for (int i = 0; i < n; i++)
			visit[i] = false;

		if (travel(a,visit,0,n,d))
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}