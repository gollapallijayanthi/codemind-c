#include<stdio.h>
int main()
{
    int n,r,a,ans,i,s=0;
    scanf("%d",&n);
    r=n*(n+1)/2;
    for(i=1;i<=n; i++)
    {
        s=s+(i*i);
    }
    a=r*r;
    ans=a-s;
    printf("%d",ans);
    
}