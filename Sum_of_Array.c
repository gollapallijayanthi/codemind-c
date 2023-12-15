#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int sum[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&sum[i]);
    }
    int s=0;
    for(i=0; i<n; i++)
    {
        s=s+sum[i];
    }
    printf("%d",s);


}