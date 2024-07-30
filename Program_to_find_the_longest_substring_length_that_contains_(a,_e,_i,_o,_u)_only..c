#include<stdio.h>
#include<string.h>
int vowelcheck(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return 1;
    else  return 0;
}
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,c=0;
    int max=0;
    for(i=0; str[i]!=NULL; i++)
    {
        if(vowelcheck(str[i])) 
        {
            c++;
           if(c>max&&c!=0) max=c;
        }
        else 
        {
       c=0;
        }
    }
    printf("%d",max);
}