//Sum of Digits Program

#include <stdio.h>

int  main()

{

   int  num;

   int  remainder;

   int  sum = 0;

   printf("Enter an integer: ");

   scanf("%d", & amp; num);

   while (num != 0)

   {

      remainder = num % 10; //Extracting digit

      sum = sum + remainder;

      num = num / 10;

   }

   printf("Sum of digits of is: %d \n", sum);

   return  0;

}