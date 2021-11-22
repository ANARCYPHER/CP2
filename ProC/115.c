//Changing Case of Strings

#include <stdio.h>

#include <ctype.h>

int main ()

{

int i=0, size = 100;

char *string;



printf("Input a string: ");

/* These 2 lines are very important. */

string = (char *) malloc (size);

getline (&string, &size, stdin);



while (string[i])                          //checking for null character

{

string[i] = tolower(string[i]);   //converting to lowercase

i++;

}



printf("\nThe string in lowercase is as follows: ");

puts(string);



i = 0;                                     //initializing index

while (string[i])                     //checking for null character

{

string[i] = toupper(string[i]);   //converting to lowercase

i++;

}



printf("\nThe string in uppercase is as follows: ");

puts(string);



return 0;

}