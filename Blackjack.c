#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d %d",&x,&y);
    w=x+y;
    z=21-w;
    if(z<=10)  printf("%d",z);
    else        printf("-1");
}