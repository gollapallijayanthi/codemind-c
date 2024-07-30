#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,c=0,max=0;
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==1) 
        {
            c++;
           if(c>max&&c!=0) max=c;
        }
        else 
        {
       c=0;
        }
    }
    printf("%d",max);
}