#include<stdio.h>
int main()
{
    int unit;
    float bill,cpu,total_bill,surcharge;
    scanf("%d",&unit);
    if(unit<=199)
    {
    cpu=1.20;

    }
   else if(unit>=200&&unit<400)
    {
    cpu=1.50;
 
    }
     else if(unit>=400&&unit<600)
    {
    cpu=1.80;
    
    }
    else if(unit>=600)
    {
    cpu=2.00;
    }
    bill=unit*cpu;

    if(bill>400)
    {
        surcharge=(bill/100)*15;
    }
    else
    {
        surcharge=100;
    }
    total_bill=bill+surcharge;
    printf("%0.2f",total_bill);
    
}