#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,sum=0;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        int t=sqrt(arr[i]);
        
            if((t*t)==arr[i]) sum=sum+arr[i];
          
    }
printf("%d",sum);
    
}