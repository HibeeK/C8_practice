#include <stdio.h>
/* This program calclates the area of a rectangle
*   Area = length X breadth
*/

int main()
{
    int l;
    int b;

    printf("Enter the length of the rectangle\n");
    scanf("%d", &l);

    printf("Enter the breadth of the rectangle\n");
    scanf("%d", &b);

    printf("The area of the rectangle is: %d\n", l*b);

    return (0);
    
}