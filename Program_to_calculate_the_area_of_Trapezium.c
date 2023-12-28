#include<stdio.h>
int main()
{
    int b1,b2,h;
    scanf("%d %d %d",&b1,&b2,&h);
    float a=(0.5*h)*(b1+b2);
    printf("%0.4f",a);
}