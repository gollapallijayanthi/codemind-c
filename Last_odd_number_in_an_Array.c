#include<stdio.h>
int main()
{
    int n,i,s=0,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    int r;
    scanf("%d",&r);
    for(i=n-1; i>=0; i--)
    {
        if(arr[i]%2!=0) 
        {
            printf("%d",arr[i]);
            break;
            
        }
    }
   
    
}