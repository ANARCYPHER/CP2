//Armstrong Number Program in C

#include <stdio.h>

int  power(int  n, int  r) {

   int  c, p = 1;

   for  (c = 1; c & lt; = r; c++)

      p = p * n;

   return  p;

}

int  main()

{

   int  n, remainder;

   int  sum = 0;

   int  digits = 0;

   printf("Enter a number: ");

   scanf("%d", & amp; n);

   int  temp = n;

   while  (temp != 0) //counting the number of digits

   {

      digits++;

      temp = temp / 10;

   }

   temp = n;

   while  (temp != 0)

   {

      remainder = temp % 10;

      sum = sum + power(remainder, digits); //raising each digit to the number of digits and adding the result

      temp = temp / 10;

   }

   if  (n == sum)

      printf("%d is an Armstrong number.\n", n);

   else

      printf("%d isn't an Armstrong number.\n", n);

   return  0;

}
