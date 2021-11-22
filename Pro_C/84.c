//Floyd triangle program in C
#include <stdio.h>

int  main()

{

   int  n, i,  c;

   printf("Enter the number of rows: ");

   scanf("%d", & amp; n);

   printf("\n");

   for  (i = 1; i & lt; = n; i++)

   {

      for  (c = 1; c & lt; = i; c++)

      {

         printf("*");

      }

      printf("\n");

   }

   return  0;

}