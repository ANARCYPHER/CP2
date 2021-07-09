/* Program to check if number is even or odd
 * using bitwise operator
 */
#include<stdio.h>
 
int main()
{
   int n;
 
   printf("Enter an integer: ");
   scanf("%d",&n);
 
   if ( n & 1)
      printf("%d is an odd number", n);
   else
      printf("%d is an even number", n);
 
   return 0;
}