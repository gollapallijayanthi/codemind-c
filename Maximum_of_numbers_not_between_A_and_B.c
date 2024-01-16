#include<stdio.h>
int main()
{
    int n,i,a,b,s=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>c)  c=arr[i];
        
    }
    scanf("%d %d",&a,&b);
     for(i=0; i<n; i++)
    {
    if(arr[i]<a||arr[i]>b) 
    {
        if(arr[i]>s)  s=arr[i];
    }
        
    }
    
   if(c>b) printf("%d",s);
   else  printf("-1");
}