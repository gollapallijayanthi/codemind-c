#include<stdio.h>
int main()
{
    int res,n;
    scanf("%d",&n);
    
  while(n>0)
     {

         res=n%10;
         printf("%d",res);
        n=n/10;
       
     }
     
    
}