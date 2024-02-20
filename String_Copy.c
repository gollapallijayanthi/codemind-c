#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    scanf("%[^
]s",str1);
    int i,l=0;
    for(i=0; str1[i]!=NULL; i++)
    {
        l++;
    }
    for(i=0; i<l; i++)
    {
        str2[i]=str1[i];
    }
    printf("%s",str2);
    
}