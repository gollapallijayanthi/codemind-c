#include<stdio.h>
int main()
{
    int r,c,k,l,i,j,m,n,r1,c1;
    scanf("%d %d",&r,&c);
    int arr1[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
   
     scanf("%d %d",&r1,&c1);
     int arr2[r1][c1];
     for(k=0; k<r1; k++)
    {
        for(l=0; l<c1; l++)
        {
            scanf("%d",&arr2[k][l]);
        }
    }
     if(r==r1&&c==c1)
     {
     	for(i=0; i<r; i++)
     	{
		 for(j=0; j<c; j++)
		 {
		 
     	printf("%d ",arr1[i][j]+arr2[i][j]);
     }
     printf("
");
     }
}
}