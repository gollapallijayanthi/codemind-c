#include<stdio.h>
int main()
{
    int year,ans;
    scanf("%d",&year);
    ans=year%100;
   if(ans<10) printf("0%d",ans);
   else printf("%d",ans);
}