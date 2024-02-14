#include<stdio.h>
int main()
{
    char str[1000];
    int i,k=0;
    scanf("%[^
]s",str);
    for(i=0; str[i]!=NULL; i++)
    {
        if(str[i]>='a'&&str[i]<='z') k++;
    }
    printf("%d",k);
}