//Concatenate strings in C

#include <stdio.h>

int main()

{

char *str1, *str2;

int i, j, size = 100, bytes_read;



printf("Enter first string: ");

str1 = (char *) malloc (size);

bytes_read = getline (&str1, &size, stdin);



i = bytes_read - 1;    //since blocks read by getline will also include null character; hence

length of string is bytes_read - 1.



printf("Enter second string: ");

str2 = (char *) malloc (size);

getline (&str2, &size, stdin);



for(j = 0; str2[j] != '\0'; j++, i++)

{

str1[i] = str2[j];

}



str1[i] = '\0';             //to terminate resultant concatenated string



printf("After concatenation string is: %s", str1);



return 0;

}