#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n-1; i>=1; i--)

    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        for(k=1; k<=n-i; k++)
        {
            printf("%d",n-i);
        }
        printf("
");
    }
    for(i=1; i<=n; i++)
    {
        printf("%d",n);
    }
}