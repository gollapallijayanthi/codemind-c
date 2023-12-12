#include<stdio.h>
int main()
{
    int a=0,b=1,i,c,n;
    scanf("%d",&n);
    for(i=1; i; i++)
    {
        // printf("%d ",i);
        
    
            c=a+b;
            a=b;
            b=c;
           if(c>n) 
           {
               if(n-a>c-n)
               {
                   
               
               printf("%d ",c);
               
               break;
               }
               else if((n-a)==(c-n))
               {
                   printf("%d %d",a,c);
                   break;
               }
               else {
                   printf("%d",a);
                   break;
               }
           }
           
        
    }
}
