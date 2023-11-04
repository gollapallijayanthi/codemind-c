#include<stdio.h>
int main()
{
    int n,sum,dc=0;
    scanf("%d",&n);
    while(n>0)

    {
        sum=(n%10);
        dc=dc+1;
        n=n/10;
    }
    printf("%d",dc);
}