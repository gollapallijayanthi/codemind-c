#include<stdio.h>
int main()
{
    int n,r,i,j,k,c=0,d=0,flag=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0) c++;
        }
        if(c==2) 
        {
            if(n%i==0)
            {
                d=0;
                r=n/i;
                for(k=1; k<=r; k++)
                {
                    if(r%k==0) d++;
                }
                if(d==2) {
                    if(i*r==n)
                    {
                    printf("%d %d",i,r);
                    flag=1;
                    break;
                    }
                }
                
            }
        }
    }
    if(flag==0) printf("-1");
}
