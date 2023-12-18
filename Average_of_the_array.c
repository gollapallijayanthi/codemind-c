#include<stdio.h>
int main()
{
    int n,i;
    float s=0.0;
    float r;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    r=s/n;
    printf("%0.2f",r);

    
}