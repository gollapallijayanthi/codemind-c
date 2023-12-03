#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=5*n*n-4;
    b=5*n*n+4;
    int r=sqrt(a),s=sqrt(b);
    int m=r*r,l=s*s;
    if(m==a||l==b) printf("True");
   
    else  printf("False");
}