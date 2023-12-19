#include<stdio.h>
int main()
{
    int n,s=0.0,c=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    float  r=s/n;
    for(i=0; i<n; i++)
    {
        if(arr[i]>=r)  c++;
    }
    printf("%d",c);
}