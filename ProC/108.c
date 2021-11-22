//Program to Removing Blank Spaces from a string in C

#include <stdio.h>

int main()
{
char *str1, modifiedstr[100];
int i, j, size = 100;

printf("Enter a string of your choice\n");
str1 = (char*)malloc(size);
getline(&str1, &size, stdin);

//Removing one or more blank spaces from string

for(i=0, j=0; str1[i] != '\0'; i++, j++)
{
if(str1[i] == ' ')
{
while(str1[i] == ' ' && str1[i+1] == ' ')
{
i++;
}
i++;
}

modifiedstr[j] = str1[i];
}

printf("String after removal of blank spaces is as follows: \n");
puts(modifiedstr);

return 0;
}