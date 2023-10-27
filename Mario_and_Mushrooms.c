#include<stdio.h>
int main()

{
    int x;
    scanf("%d",&x);
   
     int huge=x+1;
   int   small=x+2;
  if(x==0)   printf("NORMAL");
  else if(x==1) printf("HUGE");
  else if(x==2)    printf("SMALL");
    else if(x%3==0)  printf("NORMAL");
   else if(x%3==1)  printf("HUGE");
   else if(x%3==2)  printf("SMALL");
}