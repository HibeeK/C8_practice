#include <stdio.h>
/* This program calclates the area of a circle and the volume of a cylinder
*   Area of a circle = 3.14 x r x r
*   Volume of a cylinder = 3.14 x r x r x h
*   @r:  Radius
*   @h:  Height
*/
int main(void)

{
    int r = 4;
    int h = 5;

    printf("The area of the circle is: %f\n", 3.14*r*r);

    printf("The volume of the cylinder is: %f\n", 3.14*r*r*h);
  
    return (0);
    
}