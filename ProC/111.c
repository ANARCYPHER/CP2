//C program to reverse string

#include <stdio.h>

int main()

{

int size = 100, bytes_read, length, i, j;

char *string, reverse_string[100], temp;



printf("Enter some text of your choice: ");



string = (char *) malloc (size);

bytes_read = getline (&string, &size, stdin);



length = bytes_read - 1;



//Just displaying string in reverse

printf("Displaying the string in reverse: ");

for(i= (length - 1); i>=0; i--)

{

putchar(string[i]);

}



j = 0;   //initalizing counter for original string



//Reverse string stored in another string

for(i= (length - 1) ; i >= 0; i--)

{

reverse_string[i] = string[j];  //storing the value of string in reverse order

j++;

}

reverse_string[length] = '\0';     //string termination

printf("\n\nThe reverse of string is: %s\n", reverse_string);



//Using a temp character and making changes in the original array

i = 0;

j = length - 1;



while (i < j)

{

temp = string[i];

string[i] = string[j];

string[j] = temp;

i++;

j--;

}

printf("\n\nThe reverse string is: %s\n", string);



return 0;

}