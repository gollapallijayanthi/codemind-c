#include<stdio.h>
#include<string.h>
int main()
{
    int i,n=0,j,flag=0;
    char str[100],str2[100];
    scanf("%[^
]",str);
    for(i=0; str[i]!=0; i++)
    {
        n++;
    }
    j=0;
    for(i=n-1; i>=0; i--)
    {
        str2[j]=str[i];
        j++;
     
    }
    for(i=0; i<n; i++)
    {
        if(str[i]!=str2[i])
        {
            flag =1;
            break;
        }
    }
    if(flag==0) printf("Palindrome");
    else   printf("Not Palindrome");
    
}