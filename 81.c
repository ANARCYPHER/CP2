//Adding Numbers using pointers
#include <stdio.h>

int  main()

{

   int  num1;

   int  num2;

   int  * ptrNum1;

   int  * ptrNum2;

   int  sum;

   printf("Enter first ineteger: ");

   scanf("%d", & amp; num1);

   printf("Enter second ineteger: ");

   scanf("%d", & amp; num2);

   ptrNum1 = & amp;
   num1; //making ptrNum1 point to num1

   ptrNum2 = & amp;
   num2; //making ptrNum2 point to num2

   sum = * ptrNum1 + * ptrNum2; //dereferencing the pointers

   printf("Sum is:  %d\n", sum);

   return  0;

}