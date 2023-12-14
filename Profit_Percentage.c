#include<stdio.h>
int main()
{
    int cp,sp,a;
    scanf("%d %d",&cp,&sp);
    a=sp-cp;
    float res=(a*100.0)/cp;
    printf("%0.2f",res);
}