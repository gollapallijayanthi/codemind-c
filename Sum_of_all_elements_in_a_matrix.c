#include<stdio.h>
int main()
{
    int r,c,i,j,s=0,n;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
   
    scanf("%d",&n);
     for(i=0; i<r; i++)
    {
    
        for(j=0; j<c; j++)
        {
           
             s=s+arr[i][j];
        }
      
    }
       printf("%d",s);
     
}