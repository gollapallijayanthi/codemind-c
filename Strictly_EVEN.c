#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2!=0)
        {
            if(arr[i]%2==0) c++;
        }
    }
    if(c>=1)  printf("False");
    else  printf("True");
}