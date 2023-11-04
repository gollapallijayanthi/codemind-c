#include<stdio.h>
int main()
{
	int n,f=1;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("%d",f);
}