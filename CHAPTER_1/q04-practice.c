#include <stdio.h>
/* This program calculates simple interest
*   Area = length X breadth
*   @p: principal
*   @n: number of years
*   @r: rate of interest
*/

int main()
{
    int p;
    int n;
    int r;

    printf("Enter the principal value\n");
    scanf("%d", &p);

    printf("Enter the number of years\n");
    scanf("%d", &n);

    printf("Enter the rate per annum\n");
    scanf("%d", &r);

    printf("The Simple Interest is: %d\n", (p*n*r)/100);

    return (0);
    
}