//substring program in C

#include <stdio.h>

#include <string.h>



void print(char *ptr, int num)

{

int i;

for (i = 0; i < num; i++)

{

printf("%c", *(ptr + i));    //printing each alphabet of the substring under consideration

}

printf("\n");

return;

}

int main()

{

char *str, *pointer;

int i, j, length, l, size = 100;

printf("\nEnter the main string: ");

str = (char*)malloc(size);

length = getline(&str, &size, stdin);

length --;   //length of string

/* finding the possible substrings */

printf("\nPossible Substrings of entered string:\n");

for(i=0; str[i]!='\0'; i++)

{

/* printing possible substrings */

for (j = 1; j <= (length - i); j++)

{

/* prints j characters from original string str[i] */

print((str + i), j);

}

}

return 0;

}

