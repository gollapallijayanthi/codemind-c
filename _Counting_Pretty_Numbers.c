#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int a,b,j,c=0,r;
      scanf("%d %d",&a,&b);
      for(j=a; j<=b; j++)
      {
          
          r=j%10; 
          if(r==2||r==3||r==9) c++;
          
          
      }
      printf("%d
",c);
    }
}