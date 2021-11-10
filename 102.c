//Concatenate strings in C

#include <stdio.h>

#include<conio.h>

#include <string.h>                    //include the header file which contains definition of strcat and stncat  function

int main()

{

    clrscr();

    char string1[100], string2[100] ;

            printf("Str1 : \n");

            fgets(string1, 100, stdin);     //read string input from standard input screen.

            printf("Str2 : \n");

            fgets(string2, 100, stdin);     //read string input from standard input screen.

            strcat(string1, string2);      //line 16

            printf("Concatenated string using string 1 destination and string 2 Source :\n");

            puts(string1);  //modification done in destination string.

    getch();

    return  0;

}