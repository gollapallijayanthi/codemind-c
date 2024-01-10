#include<stdio.h>
int main()
{
    int r,c,i,j,e=0,o=0,n;
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
           if(arr[i][j]%2==0) e=e+arr[i][j];
           else   o=o+arr[i][j];
        }
      
    }
       printf("%d %d",e,o);
     
}

