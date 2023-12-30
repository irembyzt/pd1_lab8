#include <stdio.h>

/*Write C code to convert the length in feet to centimeter*/

int main()
{
    float centimeter;
    int feet;

    printf("enter a number: ");
    scanf("%d" ,&feet);

    centimeter=feet* 30.48;

    printf("%d feet equal to %.2f centimeter",feet,centimeter);

    return 0;

}