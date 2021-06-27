#include <stdio.h>
int main( )
{
   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
   /* for loop to print value and address of each element of array*/
   for ( int i = 0 ; i < 7 ; i++ )
   {
      /* The correct way of displaying the address would be using %p format
       * specifier like this:
       * printf("val[%d]: value is %d and address is %p\n", i, val[i], &val[i]);
       * Just to demonstrate that the array elements are stored in contiguous
       * locations, I m displaying the addresses in integer
       */
      printf("val[%d]: value is %d and address is %d\n", i, val[i], &val[i]);
   }
   return 0;
}