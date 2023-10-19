#include<stdio.h>
int main()
{
    int rainfall;
   
    scanf("%d",&rainfall);
    
    if(rainfall<3)   
    {
        printf("LIGHT");
    }
     else if(rainfall>=3&&rainfall<7) 
     {
         printf("MODERATE");
     }
     else                        
     {
         printf("HEAVY");
     }
}