#include <stdio.h>
/* This program converts celsius degrees to farenheit
*   Fareheit = (celsius x 1.8) + 32
*/
int main(void)

{
       int c;
    int b;

    printf("Enter the temperature in Celsius:\n");
    scanf("%d", &c);

    printf("The temperatue in Farenheit is: %fF\n", (c*1.8)+32);

    return (0);
    
}