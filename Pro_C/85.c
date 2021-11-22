//Floyd triangle program in C
//---------from 84
//With numbers

#include <stdio.h>

int  main()

{

   int  n, i,  c, a = 1;

   printf("Enter the number of rows: ");

   scanf("%d", & amp; n);

   printf("\n");

   for  (i = 1; i & lt; = n; i++)

   {

      for  (c = 1; c & lt; = i; c++)

      {

         printf("%d ", a);

         a++;

      }

      printf("\n");

   }

   return  0;

}