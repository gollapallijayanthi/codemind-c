#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        
    
    char str[100];
    int i,c=0;
    scanf("%s",str);
    for(i=0; str[i]!=NULL; i++)
    {
        if(str[i]>='0'&&str[i]<='9') c++;
    }

    
     if(c==0)   printf("No
");
     else printf("Yes
");
     t--;
    }
}