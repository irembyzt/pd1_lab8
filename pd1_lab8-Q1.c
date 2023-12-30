#include <stdio.h>
#include<math.h>

/*Write C code to add two numbers entered by user.*/

int main()
{
    int number1,number2,sum;

    printf("enter a number");
    scanf("%d",&number1);

    printf("enter a number");
    scanf("%d",&number2);

    sum=number1+number2;

    printf("sum= %d",sum);

    return 0;

}    

