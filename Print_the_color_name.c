#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case'V':    printf("Voilet");
                     break;
   case'I':    printf("Indigo");
                     break;
    case'B':    printf("Blue");
                   break;
    case'G':    printf("Green");
                     break; 
    case'Y':    printf("Yellow");
                     break;
    case'O':    printf("Orange");
                     break;
    case'R':    printf("Red");
                     break;
   default :   printf("-1");
    }
    
}
