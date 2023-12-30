#include <stdio.h>

/*Write C code to find the largest of three numbers A, B, and C*/

int main()
{
    int number1,number2,number3;

    printf("enter number 1: ");
    scanf("%d" ,&number1);

    printf("enter number 2: ");
    scanf("%d" ,&number2);

    printf("enter number 3: ");
    scanf("%d" ,&number3);

    if (number1>number2 && number1>number3)
       printf("%d is the largest number",number1);

    else if (number2>number3 && number2>number1)
       printf("%d is the largest number",number2);

    else
       printf("%d is the largest number",number3);

    return 0;


}