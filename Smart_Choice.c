#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
 int case1=((2*x)+(4*(x+y)));
    int case2=((2*(x+y))+(4*y));
    int case1res=1500-case1;
    int case2res=1500-case2;
    if(case1res>case2res)          printf("%d",case1res);
    else                            printf("%d",case2res);
}