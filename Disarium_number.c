#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,t,s,a=0,k;
    scanf("%d",&n);
    k=n;
    t=n;
    while(n!=0)
    {
        r=n%10;
        if(r>0) c++;
        n=n/10;
    }

     a=0;
    while(t!=0)
    {
        s=t%10;
        a=a+pow(s,c);
        if(a>0) c--;
         
        t=t/10;
    }
    if(a==k) printf("True");
    else  printf("False");
    
}