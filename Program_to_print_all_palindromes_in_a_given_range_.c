#include<stdio.h>
int main()
{
    int a,b,i,rev,t;
    scanf("%d %d",&a,&b);
    for(i=a; i<+b; i++)
    {
        int t=i,rev=0,r;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
     
    if(i==rev) printf("%d ",i);
    }
}