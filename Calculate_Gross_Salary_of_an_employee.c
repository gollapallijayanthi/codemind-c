#include<stdio.h>
int main()
{
    float s,h,d,pf,gs;
    scanf("%f %f %f",&s,&h,&d);
    pf=(s/100.0)*12;
    gs=s+h+d+pf;
    printf("%0.2f
%0.2f",pf,gs);
}