#include<stdio.h>
int main()
{
    char str[100];
    int i;
    scanf("%[^
]",str);
    char str1[1]={'a'};

    for(i=0; str[i]!=NULL; i++)
    {
        if(str1[0]<str[i])   str1[0]=str[i];
    }

    
        printf("%c",str1[0]);
    
}