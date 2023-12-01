#include<stdio.h>
int main()
{
    int n,a,rev=0,r,b;
    scanf("%d",&n);
    a=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    b=rev*rev;
   int t=b,d=0,s;
    
    while(b!=0)
    {
        s=b%10;
        d=d*10+s;
        b=b/10;
        
    }
    if(d==a)  printf("True");
    else  printf("False");
}