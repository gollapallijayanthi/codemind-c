#include<stdio.h>
int main()
{
    int n,t,rev=0,s,r,a,d=0,num=0;
    scanf("%d",&n);
      a=n*n;
    t=n,s=n;
    while(n!=0)
    {
        r=n%10;
        if(r>0) d++;
        n=n/10;
    }
  
    while(d!=0)
    {
        r=a%10;
        if(r>0) d--;
        rev=rev*10+r;
        a=a/10;
    }
    while(rev!=0)
    {
        r=rev%10;
        num=num*10+r;
        rev=rev/10;
    }
    if(num==s) printf("Automorphic Number");
    else   printf("Not an Automorphic Number");
}
