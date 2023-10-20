#include<stdio.h>
int main()
{
    int easy,hard,x,score;
    scanf("%d %d %d",&x,&easy,&hard);
    score=(easy*1)+(hard*2);
    if(score>=x)  printf("Qualify");
    else    printf("Not Qualify");
}