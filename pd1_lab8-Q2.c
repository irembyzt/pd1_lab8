#include<stdio.h>
#define PI 3.14159  

/*Calculate the area of a circle with given radius.*/

int main()

{

float radius, area;  

printf("Enter the radius of the circle: ");  
scanf("%f", &radius);  

area = PI * radius * radius;  
  
printf("The area of the circle is: %f", area);  
  
return 0;  

}