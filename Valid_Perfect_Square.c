#include<stdio.h>
int main()
{
    int n,tt,i,flag=0;
    scanf("%d",&tt);
    while(tt>0)
    {
    	scanf("%d",&n);
    	flag=0;
    	for(i=1;i<=n;i++)
    	{
    		if(i*i==n)
    		{
    			flag=1;
    			break;
			}
		}
		if(flag==1)
		{
			printf("True
");
		}
		else
		{
			printf("False
");
		}
    	
    	tt=tt-1;
	}
    
}