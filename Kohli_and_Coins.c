#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%5!=0) printf("-1");
    else if(x%10==0)  printf("%d",x/10);
    else if(x%5==0)  printf("%d",((x/10)+(x%10)/5));
    
}