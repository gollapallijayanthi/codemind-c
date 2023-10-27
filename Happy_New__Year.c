#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
  int  total=1440;
   int completedtime=(h*60)+(m);
int  lefttime=total-completedtime;
    printf("%d",lefttime);
    
}