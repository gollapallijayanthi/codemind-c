#include<stdio.h>

int main()
{
    int  a,b,i,res;
    scanf("%d %d",&a,&b);
    for(i=1; i; i++)
    {
        res=i*b;
        if(res%a==0)
        break;
    }
    
    printf("%d",res);
}