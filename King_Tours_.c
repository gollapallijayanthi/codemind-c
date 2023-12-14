#include<stdio.h>
void seating(int n,int m)
{
    printf("%d",(m*7)+(n*5));
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    seating(m,n);
}