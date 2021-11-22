//Changing Case of Strings

#include <stdio.h>

#include<conio.h>

#include <string.h> //include the header file which contains definition of strlwr and strupr

functions.

int main()

{

clrscr();

char string[100] ;



printf("Enter a string : ");

fgets(string, 100, stdin);     //read string input from standard input screen.



printf("The string in lower case :\n", strlwr(string));

printf("The string in upper case :\n", strupr(string));

getch();



return  0;

}