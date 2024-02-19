#include<stdio.h>
#include<string.h>
int main()
{
    int i,n=0;
    char str[100];
    scanf("%[^
]",str);
    for(i=0; str[i]!=0; i++)
    {
        n++;
    }
    for(i=n-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    
}