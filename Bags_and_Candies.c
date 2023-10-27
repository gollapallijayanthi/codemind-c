#include<stdio.h>
int main()
{
    int n,k,m;;
    scanf("%d %d %d",&n,&k,&m);
   int capacity=k*m;
    if(n%capacity==0)  printf("%d",(n/capacity));
    else if(n%capacity!=0)  printf("%d",(n/capacity)+1);
}