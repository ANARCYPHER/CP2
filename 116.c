//Changing Case of Strings

#include <stdio.h>

void lower_string(char []);

void upper_string(char []);



int main()

{

int size = 100;

char *string;



printf("Enter some text of your choice: ");



string = (char *) malloc (size);

getline (&string, &size, stdin);



lower_string(string);   //function call to convert to lowercase

upper_string(string);   //function call to convert to uppercase



return 0;

}



void lower_string(char str[])

{

int i = 0;



while (str[i] != '\0') {

if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters

{

str[i] = str[i] + 32;               //converting uppercase to lowercase

}

i++;

}



printf("The string in lower case: %s\n", str);

}



void upper_string(char str[])

{

int i = 0;



while (str[i] != '\0')

{

if (str[i] >= 'a' && str[i] <= 'z')   //checking for lowercase characters

{

str[i] = str[i] - 32;              //converting to uppercase from lowercase

}

i++;

}



printf("The string in upper case: %s\n", str);

}
