#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int arr[r][c],sum=0;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
           
           if(i==1||i==r||i==c||j==r||j==c||j==1)  sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}