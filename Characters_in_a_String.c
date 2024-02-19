#include<stdio.h>
#include<string.h>
int main()
{
    int i,n=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0; str[i]!=0; i++)
    {
        n++;
    }
    printf("%d",n);
}