//Printing Inverted/Pascal’s Triangle
#include<stdio.h>

int  main()

{

   int  n, i, j, k;

   printf("Enter number of rows: ");

   scanf("%d", & amp; n);

   printf("\n");

   for (i = n; i & gt; = 1; --i)

   {

      for (k = 0; k & lt; n - i; ++k)

         printf("  ");

      for (j = i; j & lt; = 2 * i - 1; ++j)

         printf("* ");

      for (j = 0; j & lt; i - 1; ++j)

         printf("* ");

      printf("\n");

   }

   return  0;

}