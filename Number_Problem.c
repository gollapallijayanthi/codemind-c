#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
   int d;
   if(a>b) 
   {
       d=a-b;
   }
  else  
  {
      d=b-a;
  }
    
    if(a==b) printf("0");
    else if(d%10==0) printf("%d",(d/10));
       else  printf("%d",(d/10)+1);
        

}