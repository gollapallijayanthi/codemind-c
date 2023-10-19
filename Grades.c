#include<stdio.h>
int main()
{
    int phy,chem,bio,math,cs,total;
    scanf("%d %d %d %d %d",&phy,&chem,&bio,&math,&cs);
    total=phy+chem+bio+math+cs;
    int perc=(total*100)/500;
    if(perc>=90)    
    {
        printf("Grade A");
    }
     else if(perc>=80)    
    {
        printf("Grade B");
    }
     else if(perc>=70)    
    {
        printf("Grade C");
    }
      else if(perc>=60)    
    {
        printf("Grade D");
    }
     else if(perc>=40)    
    {
        printf("Grade E");
    }
     else if(perc<40)    
    {
        printf("Grade F");
    }
}
