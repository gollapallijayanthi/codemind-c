#include<stdio.h>
int main()
{
    int unit;
    float surcharge;
    float cpu;
    scanf("%d",&unit);
    if(unit<=199)
    {
        cpu=1.20;
        
    }
    else if(unit>=200&&unit<400)
    {
        cpu=1.40;
    
    }
else if(unit>=400&&unit<600)
{
    cpu=1.60;
    
    
}
else if(unit>=600&&unit<800)
{
    cpu=1.80;
    
    
}
else if(unit>=800)
{
    cpu=2.00;
   
    
}
 float bill=unit*cpu;
if(unit<400)
{
    surcharge=0;
}
else 
{
    surcharge=(bill/100)*15;
}

    
  
 float total_amount=bill+surcharge;
printf("Units Consumed: %d
",unit);
printf("Cost per Unit: %0.2f
",cpu);
printf("Bill: %0.2f
",bill);
printf("Surcharge: %0.2f
",surcharge);
printf("Total Amount: %0.2f
",total_amount);
    
}