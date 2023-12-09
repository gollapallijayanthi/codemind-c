#include<stdio.h>
int main()
{
    int w,x,y,z,a,b,c,d;
    scanf("%d %d %d %d",&w,&x,&y,&z);
    a=x+y+z;
    b=x+y;
    c=x+z;
    d=y+z;
    if(w==x||w==y||w==z)  printf("YES");
  else  if(w==c||w==b||w==d||w==a) printf("YES");
    else  printf("NO");
}