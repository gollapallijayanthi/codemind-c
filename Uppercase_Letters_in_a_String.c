#include<stdio.h>
int main()
{
    char str[1000];
    int i,k=0;
    scanf("%[^
]s",str);
    for(i=0; str[i]!=NULL; i++)
    {
        if(str[i]>='A'&&str[i]<='Z') k++;
    }
    printf("%d",k);
}