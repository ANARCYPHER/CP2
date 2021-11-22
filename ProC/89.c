//Program to Copy strings in C

#include<stdio.h>
#include<string.h>
void string_copy(char dest[], char source[])
{
int i;

for( i=0; source[i]!='\0'; i++)
{
dest[i] = source[i];
}

dest[i] = '\0'; //appending null character to mark end of string
}
int main()
{
char *source, dest[50];
int size = 50, length, bytes_read;

printf("Enter the source string:\n");
source = (char*)malloc(size);
getline(&source, &size, stdin);

string_copy(dest, source);   //function call to string copy

printf("The Destination string after string copy is: %s\n", dest);

return 0;
}