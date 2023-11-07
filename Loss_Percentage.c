#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d %d",&cp,&sp);
int res=cp-sp;
float perc=(res*100.0)/cp;
printf("%0.2f",perc);
}