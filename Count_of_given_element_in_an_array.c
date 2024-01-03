#include<stdio.h>
int main()
{
    int n,i,c=0,z;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
        scanf("%d",&z);
        for(i=0;i<n; i++)
        {
            if(arr[i]==z)  c++;
        }
          printf("%d",c);
    
    
}