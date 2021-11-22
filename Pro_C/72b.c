#include <stdio.h>


int  main(void) {

   int  operand1 = 10;

   int  operand2 = 5;

   int  sum = operand1 + operand2;

   int  difference = operand1 - operand2;

   int  product = operand1 * operand2;

   int  quotient = operand1 / operand2;

   int  remainder = operand1 % operand2;

   printf("Value of operand1: %d \n", operand1);

   printf("Value of operand2: %d \n", operand2);

   printf("Results: \n");

   printf("operand1 + operand2: %d \n", sum);

   printf("operand1 - operand2: %d \n", difference);

   printf("operand1 * operand2: %d \n", product);

   printf("operand1 / operand2: %d \n", quotient);

   printf("operand1 %% operand2: %d \n", remainder);
   
   return  0;

}