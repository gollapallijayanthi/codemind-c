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
    float r=s/n;
    for(i=0; i<n; i++)
    {
        if(arr[i]==r) 
        {
            printf("True");
            flag=1;
            break;
        }
    }
   
    if(flag==0) printf("False");
}