#include<bits/stdc++.h>
using namespace std;

int xPc(int a[], int n, int x)
{
    int c=0;
    unordered_set<int> s;
    for (int i=0; i<n ; i++)
    {
        if (s.find(x^a[i]) != s.end())
            c++;
        s.insert(a[i]);
    }
    return c;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c = 0;
		scanf("%d",&n);
		int a[n],o=0,e=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2==0)
				e++;
			else o++;
		}
		int z = xPc(a,n,0);
		z = z+(z*(z -1))/2;
		int t = xPc(a,n,2);
		t = t+(t*(t-1))/2;
		int ans = (e*(e-1))/2 + (o*(o-1))/2 - t -z;
		cout<<ans<<"\n";
	}
	return 0;
}

