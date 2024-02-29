#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
          for(k=0; k<=n-i-1; k++ )
          {
               printf("*");
           }
        
        printf("
");
    }
}