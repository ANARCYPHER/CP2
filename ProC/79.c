//Adding n numbers program
#include <stdio.h>

int  main()

{

   int  count;

   int  num;

   int  sum = 0;

   int  i = 1;

   printf("Enter the number of numbers you wish to add: ");

   scanf("%d", & amp; count);

   for  (i = 1; i & lt; = count; i++)

   {

      printf("Enter the number: ");

      scanf("%d", & amp; num);

      sum = sum + num;

   }

   printf("Sum: %d\n", sum);

   return  0;

}