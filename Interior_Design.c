#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    int style1,style2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    style1=x1+y1;
    style2=x2+y2;
    if(style1<style2)       printf("%d",style1);
    else                    printf("%d",style2);
}