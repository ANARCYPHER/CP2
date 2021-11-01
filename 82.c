//Vowel program in c
#include <stdio.h>

int  main()

{

   char  ch;

   printf("Enter a character:");

   scanf("%c", & amp; ch);

   if  (ch == 'a'  || ch == 'A'  || ch == 'e'  || ch == 'E'  || ch == 'i'  || ch == 'I'  || ch == 'o'  || ch == 'O'  || ch == 'u'  || ch == 'U') //checking if the character is a vowel

      printf("%c is a vowel.\n", ch);

   else

      printf("%c is a consonant.\n", ch);

   return  0;

}