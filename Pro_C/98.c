//Palindrome program in C

#include<conio.h>

#include <string.h>    //include the header file which contains definition of string functions

int main()

{

clrscr();

char string1[50], string2[50] ;



printf("Enter a string : \n");

fgets(string1, 100, stdin);     //read string input from standard input screen.



strcpy(string2,string1);     //copy string 1 into string 2

strrev(string2);                  //reverse string 2 in order to compare both string in next step



if( strcmp(string1, string2) == 0 )

printf("Entered string is a palindrome.\n");

else

printf("Entered string is not a palindrome.\n");

getch();



return  0;

}