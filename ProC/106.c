//Program to Swap two Strings in C

#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<conio.h>

int main()
{
char str1[50], str2[50], *temp;

printf("Enter string 1: ");
fgets(str1, 50, stdin);
printf("\nEnter string 2: ");
fgets(str2, 50, stdin);

printf("\nBefore Swapping\n");
printf("First string: %s\n",str1);
printf("Second string: %s\n",str2);

temp = (char*)malloc(100);
strcpy(temp,str1);        //swapping values using a temp string pointer.
strcpy(str1,str2);
strcpy(str2,temp);
printf("After Swapping\n");
printf("First string: %s\n",str1);
printf("Second string: %s\n",str2);

free(temp);

getch();
return 0;

}