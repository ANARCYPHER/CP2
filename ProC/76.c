//C programming reverse number
#include <stdio.h>

int  main()

{

   int  num;

   int  reversedNum = 0;

   int  remainder;

   printf("Enter an integer: ");

   scanf("%d", & amp; num);

   while (num != 0)

   {

      remainder = num % 10;

      reversedNum = reversedNum * 10  + remainder;

      num = num / 10;

   }

   printf("Reversed Number = %d", reversedNum);

   return  0;

}