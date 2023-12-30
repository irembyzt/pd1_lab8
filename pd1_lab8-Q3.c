#include <stdio.h>

/*Determine and Output Whether Number N is Even or */

int main()

{

    int number1, number2;

    printf("enter a number: ");
    scanf("%d", &number1);

    number2 = number1 % 2;

    if (number2 == 0)
       printf("%d number is even", number1);

    else 
       printf("%d number is odd", number1);

   return 0;

}
