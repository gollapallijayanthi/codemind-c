#include<stdio.h>
int main()
{
    int t,s,b,kb;
    scanf("%d %d %d",&t,&s,&b);
    kb=(2*t*s*b*512)/1024;
    printf("%d KB",kb);
}