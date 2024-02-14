#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n/2; i++)
    {
        printf("%d %d ",arr[i],arr[n-i-1]);
        c++;
        
        
    }
    if(c*2!=n) printf("%d 0",arr[n/2]);
    
}