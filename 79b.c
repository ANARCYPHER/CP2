//Adding n numbers program

#include <stdio.h>

int  main()

{

   int  count;

   int  sum = 0;

   int  i = 1;

   printf("Enter the number of numbers you wish to add: ");

   scanf("%d", & amp; count);

   int  arr[count];

   for  (i = 1; i & lt; = count; i++) // for loop for storing user input in the array

   {

      printf("Enter a number: ");

      scanf("%d", & amp; arr[i]);

   }

   for  (i = 1; i & lt; = count; i++) //for loop for calculating the sum

   {

      sum = sum + arr[i];

   }

   printf("Sum: %d\n", sum);

   return  0;

}