#include<stdio.h>
int main()
{
    int n,even,odd,magicpairs;
    scanf("%d",&n);
    if(n%2==0)
    {
        even=(n/2);
        odd=n-even;
    }
    else  if(n%2!=0)
    {
      odd=(n/2)+1;
      even=n-odd;
    }
    
    magicpairs=(odd*even*2);
    printf("%d",magicpairs);
}