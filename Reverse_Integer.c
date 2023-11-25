#include<stdio.h>
int main()
{
    int n,m,rev=0,t,r;
    scanf("%d",&n);
    t=n;
    if(n<0)   m=n*-1;
    else      m=n;
    while(m!=0)
    {
        r=m%10;
        rev=rev*10+r;
        m=m/10;
    }
    if(t<0)  printf("-%d",rev);
    else   printf("%d",rev);
}