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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int l=0;
		stack<int>st;
		for(int i=0;i<n;i++)
		{
			while(!st.empty() && a[st.top()] < a[i])
				st.pop();
			st.push(i);
		}
		l = st.size();
		
		int r = 0;
		stack<int>st2;
		for(int i=n-1;i>st.top();i--)
		{
			while(!st2.empty() && a[st2.top()] < a[i])
				st2.pop();
			st2.push(i);
		}
		
		int r = st2.size();
		int ans1 = l + r;

		stack<int>st3;
		for(int i=n-1;i>=0;i--)
		{
			while(!st3.empty() && a[st3.top()] < a[i])
				st3.pop();
			st3.push(i);
		}
		l = st3.size();
		stack<int>st4;
		for(int i = 0; i<st3.top();i++)
		{
			while(!st4.empty() && a[st4.top()] < a[i])
				st4.pop();
			st4.push(i);
		}
		r = st4.size();

		int ans2 = l+r;
		if(ans1>ans2)
			cout<<ans2<<"\n";
		else cout<<ans1<<"\n";
	}
	return 0;
}
