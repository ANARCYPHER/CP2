//C program to print diamond

#include <stdio.h>

int  main()

{

   int  n, c, k, space = 1;

   printf("Enter number of rows: ");

   scanf("%d", & amp; n);

   space = n - 1;

   for  (k = 1; k & lt; = n; k++)

   {

      for  (c = 1; c & lt; = space; c++)

         printf(" ");

      space--;

      for  (c = 1; c & lt; = 2 * k - 1; c++)

         printf("*");

      printf("\n");

   }

   space = 1;

   for  (k = 1; k & lt; = n - 1; k++)

   {

      for  (c = 1; c & lt; = space; c++)

         printf(" ");

      space++;

      for  (c = 1 ; c & lt; = 2 * (n - k) - 1; c++)

         printf("*");

      printf("\n");

   }

}