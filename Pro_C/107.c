//Program to Swap two Strings in C

#include <stdio.h>

int main()
{
char temp[100], *str1, *str2;
int i, size = 100;

printf("Enter the first string: ");
str1 = (char*)malloc(size);
getline(&str1, &size, stdin);

printf("\nEnter the second string: ");
str2 = (char*)malloc(size);
getline(&str2, &size, stdin);

for(i=0; str1[i]!='\0'|| str2[i]!='\0'; i++)
{
temp[i] = str1[i];
str1[i] = str2[i];
str2[i] = temp[i];
}

printf("\n\nThe strings after swapping:\n\n");
printf("First string:  %s \n", str1);
printf("First string:  %s  \n", str2);
return 0;

}