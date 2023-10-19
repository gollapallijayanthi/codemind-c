#include<stdio.h>
int main()
{
    int time,h,m;
    scanf("%d",&time);
    h=(time/60);
    m=(time%60);
    printf("%d Hour(s) %d Minute(s)",h,m);
    
}
