//Program to sort a string in C

#include <stdio.h>

#include <string.h>



int main ()

{

char temp, *str;

int i, j, l, size = 100;



printf("Enter the string to be sorted: ");

str = (char*)malloc(size);

l = getline(&str, &size, stdin);

l--;                                    //length of string is no of blocks read - 1



printf("String before sorting: %s \n", str);



for (i = 0; i < l-1; i++)

{

for (j = i+1; j < l; j++)

{

if (str[i] > str[j])

{

temp = str[i];

str[i] = str[j];

str[j] = temp;

}

}

}



printf("String after sorting: %s \n", str);



return 0;

}