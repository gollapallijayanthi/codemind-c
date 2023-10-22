#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    scanf("%d %d %d",&x,&y,&z);
    a=x+y;
    b=y+z;
    c=z+x;
    if(a>b&&a>c) printf("%d",a);
     else if(b>a&&b>c) printf("%d",b);  
     else printf("%d",c);
    
    
}