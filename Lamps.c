#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    int r,b,c1,c2;
    b=(n-k);
    r=k;
    c1=(b*y)+(r*x);
    c2=n*x;
    if(c1<c2) printf("%d",c1);
    else   printf("%d",c2);
    
    
}