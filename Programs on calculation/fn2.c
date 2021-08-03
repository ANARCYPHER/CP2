#include <stdio.h>
/* Creating a user defined function product that
 * multiplies the numbers that are passed as an argument
 * to this function. It returns the product of these numbers
 */
float product(float a, float b){
    return a*b;
}
int main()
{
    float num1, num2, prod;
    printf("Enter first Number: ");
    scanf("%f", &num1);
    printf("Enter second Number: ");
    scanf("%f", &num2);

    // Calling product function
    prod  = product(num1, num2);

    // Displaying result up to 3 decimal places.
    printf("Product of entered numbers is:%.3f", prod);

    return 0;
}