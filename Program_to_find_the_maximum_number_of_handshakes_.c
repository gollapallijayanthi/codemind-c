#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int handshakes=(n*(n-1))/2;
    printf("%d",handshakes);
}