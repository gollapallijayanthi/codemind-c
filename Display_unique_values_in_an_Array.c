#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n; i++)
    {
        int t=0;
        for(j=0; j<n; j++)
        {
            if(arr[i]==arr[j])  t++;
        }
        if(t==1)  
        {
            flag=1;
            printf("%d ",arr[i]);
        }
    }
    if(flag==0) printf("-1");
}