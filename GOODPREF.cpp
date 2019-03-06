#include<iostream>
#define ull unsigned long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		ull n;
		cin>>s>>n;
		ull a=0,b=0,c=0,d=0,pd=0,i=0;
		for(i=0;i<n;i++)
		{
			d=0;
			for(int j=0;j<s.size();j++)
			{
				if(s[j] ==  'a')
					a++;
				else if(s[j] == 'b')
					b++;
				if(a>b)
				{
					c++;
					d++;
				}
			}
			if(pd == d)
				break;
			else{
				pd = d;
			}
		}
		if(i==n)
		    cout<<c<<"\n";
		else cout<<c+(n-i-1)*d<<"\n";
	}
	return 0;
}
