#include<stdio.h>
int main()
{
    int n,sum=0,prod=1;
    scanf("%d",&n);
while(n>0)
{
    sum=sum+n%10;
    prod=prod*n%10;
    n=n/10;
}
if(sum==prod)  printf("Spy Number");
else           printf("Not Spy Number");
}