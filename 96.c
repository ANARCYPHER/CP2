//Program in C to delete the vowels in a string

#include <stdio.h>

#include <string.h>



int find_vowel(char ch)

{

if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')

return 1;   //It is a vowel

else

return 0;   //It is not a vowel

}



int main()

{

char str[100], temp[100];

int i, j;



printf("Enter a string: \n");

fgets(str, 100, stdin);



for(i = 0, j = 0; str[i] != '\0'; i++)

{

if(find_vowel(str[i]) == 0)

{

temp[j] = str[i];                           //It is not a vowel

j++;

}

}



temp[j] = '\0';  //terminate the string



strcpy(str, temp);    //modifying the original string with vowels deleted.



printf("String after deleting vowels: %s\n", str);



return 0;

}
