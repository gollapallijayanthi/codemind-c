#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int r;
    r=strcmp(s1,s2);
    if(r==0)  printf("Strings are Equal");
    else   printf("Strings are not Equal");
}