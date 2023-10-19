#include<stdio.h>
int main()
{
    int bs,da,hra;
    scanf("%d",&bs);
    if(bs<=10000)
    {
    da=(bs/100)*80;
    hra=(bs/100)*20;
    }
     else if(bs<=20000)
    {
    da=(bs/100)*90;
    hra=(bs/100)*25;
    }
     else if(bs>20000)
    {
    da=(bs/100)*95;
    hra=(bs/100)*30;
    }
  float gross=bs+da+hra;
  printf("%0.2f",gross);
  
}
