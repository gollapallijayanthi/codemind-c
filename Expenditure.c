#include<stdio.h>
int main()
{
    int x,y,expenditure;
    scanf("%d %d",&x,&y);
    expenditure=y*30;
    if(expenditure>x)  printf("NO");
    else                printf("YES");
}