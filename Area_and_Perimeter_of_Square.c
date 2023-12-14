#include<stdio.h>
int per();
int area();
int main()
{
    
   int res1=per();
   int res2=area();
 printf("%d %d",res1,res2);
 
    
}
int per()
{
        int s,p;
    
   scanf("%d",&s);
    p=s*s;
    return p;
}
int area()
{ 
    int a,s;
       scanf("%d",&s);
    a=s*4;
    return a;
    
}