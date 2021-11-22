//Palindrome in C Programming

#include <stdio.h>

int  main(){
   int  num;
   int  reversedNum = 0;
   int  remainder;
   printf("Enter an integer: ");
   scanf("%d", &num);
   int  originalNum = num;
   while (num != 0)   {
      remainder = num % 10;
      reversedNum = reversedNum * 10  + remainder;
      num = num / 10;
   }

   if (reversedNum == originalNum){ //if the reversed number is the same as the original number then the original number is a palindrome number
      printf("%d is a palindrome number", originalNum);
   } else{
      printf("%d is not a palindrome number", originalNum);
   }
   return  0;
}