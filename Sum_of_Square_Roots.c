#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float s=0.0,r;
    scanf("%d %d",&a,&b);
    for(i=a; i<=b; i++)
    {
        r=sqrt(i);
       s=s+r;
    }
    printf("%0.2f",s);
}