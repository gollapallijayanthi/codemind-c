#include<stdio.h>
int main()
{
    int n,i,j,t,a,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int n,j,t,s,a,k,r;
        scanf("%d",&n);
       k=n,a=0,s=1;
        while(n!=0)
        {
            s=1;
            r=n%10;
            
            for(j=1; j<=r; j++)
            {
                s=s*j;
            }
            a=a+s;
            n=n/10;
        }
      
        if(a==k)  printf("Strong
");
        else   printf("Not Strong
");
      
    }
   
}