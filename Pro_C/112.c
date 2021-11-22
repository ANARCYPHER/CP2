//C program to reverse string

#include <stdio.h>

void reverse(char str[], int index, int size)

{

char temp;

temp = str[index];

str[index] = str[size - index];

str[size - index] = temp;

if (index == size / 2)

{

return;

}

reverse(str, index + 1, size);

}

int main()

{

int size = 100, bytes_read, length;

char *string;



printf("Enter some text of your choice: ");



string = (char *) malloc (size);

bytes_read = getline (&string, &size, stdin);



length = bytes_read - 1;



reverse(string, 0, (length - 1));



printf("The string after reversing is: %s\n", string);



return 0;

}