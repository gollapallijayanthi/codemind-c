#include<stdio.h>
int main()
{
    int sum=0,n;
    scanf("%d",&n);
    int i=1;
    while(i<n)
    { 
        if(n%i==0)
        sum=sum+i;
    i++;
    }
    printf("%d",sum);
}