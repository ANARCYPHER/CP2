//C program to reverse string

#include <stdio.h>
#include<conio.h>
#include <string.h>    //include the header file which contains definition of strrev function

int main(){
  clrscr();
  char string[100] ;
  printf("Enter a string : \n");
  fgets(string, 100, stdin);     //read string input from standard input screen.
  printf("Reverse is :\n", strrev(string));
  getch();
  return  0;
}