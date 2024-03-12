#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int i,j,a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=0,c=0,t;
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=0; j<n; j++)
        {
            if(a[i]==a[j]) 
            {
                c++;
                
            }
            
            
        }
        if(a[i]==c)
        {
            t=a[i];
            flag=1;
            a[i]=0;
          
            printf("%d ",t);
            
        }
       // min=t;
         
    }
    if(flag==0) printf("-1");
}