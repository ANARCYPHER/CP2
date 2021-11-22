//Program in C to delete the vowels in a string

#include<stdio.h>

#include<stdlib.h>

#include<string.h>



int find_vowel(char ch)

{

if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')

return 1;   //It is a vowel

else

return 0;   //It is not a vowel

}





int main()

{

char *string, *temp, *strptr, ch, *start;

int size = 100;



printf("Enter a string\n");

string = (char*)malloc(size);

getline(&string, &size, stdin);



temp = string;

strptr = (char*)malloc(100);



start = strptr;



while(*temp)

{

ch = *temp;



if ( !find_vowel(ch) )

{

*strptr = ch;

strptr++;

}

temp++;

}

*strptr = '\0';



strptr = start;

strcpy(string, strptr);

free(strptr);



printf("String after removing vowels: %s\n", string);



return 0;

}