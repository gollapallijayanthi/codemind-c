#include<stdio.h>
int main()
{
    int i;
    for(i=1; ; i++)
    {
        scanf("%d",&i);
        if(i==-1) break;
        printf("%d
",(i*i));
    }
}