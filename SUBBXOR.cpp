#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    int x=0,c=0;
    for(int i=0;i<n;i++)
    {
        x=a[i];
        if(x<k)
            c++;
        for(int j=i+1;j<n;j++)
        {
            x=x^a[j];
            if(x<k)
                c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
