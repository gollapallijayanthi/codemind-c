#include<stdio.h>
int main()
{
     char str[10];
     
    int k;
    scanf("%[^
]s",str);
    for(k=0; str[k]!=NULL; k++)
    {
        if(k==6) printf("%c",str[k]);
    }
    
}