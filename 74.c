 
#include <stdio.h>

int  main() {

   int  year;

   printf("Enter year: ");

   scanf("%d", & amp; year);

   if  (((year % 4  == 0) & amp; & amp;
         (year % 100 != 0)) || (year % 400  == 0))

      printf("%d is a Leap year", year);

   else

      printf("%d is not a Leap Year", year);

   return  0;

}