#include <stdio.h>
#include <math.h>

/*Convert Temperature from Fahrenheit (℉) to Celsius (℃).*/

int main()
{
    float number2 ,number1;

    printf("enter a number: ");
    scanf("%f",&number1);

    number2=(number1-32)*5/9;

    printf("%.2f" ,number2);


    return 0;

}
