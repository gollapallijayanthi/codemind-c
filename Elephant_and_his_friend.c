#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    if(x%5==0)  printf("%d",(x/5));
    else if(x%5<5) printf("%d",(x/5)+1);
    
}