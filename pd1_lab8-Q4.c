#include <stdio.h>

/*Determine Whether a Temperature is Below or Above the Freezing Point*/

int main()
{
    int number;

    printf("enter a number:");
    scanf("%d",&number);

    if (number<0)
      printf("Temperature is Below the Freezing Point");

    else if (number>0)
       printf("Temperature is Above the Freezing Point");

    else 
       printf("Temperature is the Freezing Point"); 
       
      return 0;

}