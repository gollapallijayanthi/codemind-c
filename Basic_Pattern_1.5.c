#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=65; i<=65+n-1; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}