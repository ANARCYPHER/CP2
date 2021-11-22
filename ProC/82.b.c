//Vowel program in c
#include <stdio.h>

int  main()

{

   char  ch;

   printf("Enter a character: ");

   scanf("%c", & amp; ch);

   switch (ch)

   {

      //checking if the character is a vowel in all the cases below

   case  'a':

   case  'A':

   case  'e':

   case  'E':

   case  'i':

   case  'I':

   case  'o':

   case  'O':

   case  'u':

   case  'U':

      printf("%c is a vowel.\n", ch);

      break;

   default:

      printf("%c isn't a vowel.\n", ch);

   }

   return  0;

}