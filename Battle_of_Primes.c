#include<stdio.h>
int main()
{
    int n1,n2,i,j,c=0;
    scanf("%d %d",&n1,&n2);
    for(i=n1+n2+1; i; i++)
    {
        c=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0) c++;
        }
        if(c==2) {
            printf("%d",i-(n1+n2));
            break;
        }
    }
}