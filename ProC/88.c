//Program to Copy strings in C

#include<stdio.h>
#include<string.h>
int main()
{
char *source, dest[50];
int size = 50;

printf("Enter the source string:\n");
source = (char*)malloc(size);
getline(&source, &size, stdin);

strcpy(dest, source);   //performing string copy

printf("The Destination string after string copy is: %s\n", dest);

return 0;
}