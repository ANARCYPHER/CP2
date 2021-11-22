//Concatenate strings in C

#include <stdio.h>

void concatenate(char *src, char *dest)

{

while(*src)

src++;



src--;   //decrementing as the last block read contains new line character of first string.



while(*dest)

{

*src = *dest;

src++;

dest++;

}



*src = '\0';



}

int main()

{

char *str1, *str2;

int size = 100, bytes_read;



printf("Enter first string: ");

str1 = (char *) malloc (size);

bytes_read = getline (&str1, &size, stdin);



printf("Enter second string: ");

str2 = (char *) malloc (size);

getline (&str2, &size, stdin);



concatenate(str1, str2);



printf("After concatenation string is: %s", str1);



return 0;

}