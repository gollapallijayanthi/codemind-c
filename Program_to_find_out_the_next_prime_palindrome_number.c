#include<stdio.h>
int main()
{
    int n,r,rev=0,t,j,i,c=0;
    scanf("%d",&n);
   for(i=n+1; i; i++)
   {
       c=0;
       for(j=1; j<=i; j++)
       {
           if(i%j==0) c++;
           
       }
       if(c==2)
       {
           t=i,rev=0;
           while(t!=0)
           {
               r=t%10;
               rev=rev*10+r;
               t=t/10;
           }
           if(rev==i) 
           {
               printf("%d",rev);
               break;
           }
       }
   }
}