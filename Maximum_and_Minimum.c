#include<stdio.h>
int main()
{
    int n;
    int min=0,max=0,c=0;
    scanf("%d",&n);
    int a[n],i,j;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
         c=0;
        for(j=0; j<n; j++)
        {
            if(a[j]==a[i]) c++;
        }
        if(a[i]==c)
        {
            if(min==0||a[i]<min)
            {
                min=a[i];
            }
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    }
    if(min==0) printf("-1");
    else printf("%d %d",min,max);
}