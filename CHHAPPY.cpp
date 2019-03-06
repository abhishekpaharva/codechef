#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		bool ans = false;
		vector<int>idx(n+1,-1);
		vector<bool>hash(n+1,false);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			hash[a[i]] = true;
		}
		for(int i=1;i<=n;i++)
		{
			if(idx[a[i]] == -1)
			{
			    if(hash[i])
			        idx[a[i]] = i;
			}
			else{
				if(hash[idx[a[i]]] && hash[i] && idx[a[i]] != i)
					ans = true;
			}
		}
		if(ans)
			cout<<"Truly Happy\n";
		else cout<<"Poor Chef\n";
	}
	return 0;
}
