#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,c=0;
		scanf("%d",&n);
		int a[n];
		int m[4004]={0};
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			m[2001+(2*a[i])]=1;
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
				if(m[2001+a[i]+a[j]] == 1)
					c++;
		}
		printf("%d\n",c);
	}
	return 0;
}