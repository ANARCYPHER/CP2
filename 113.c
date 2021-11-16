//C program to reverse string

#include <stdio.h>

void reverse(char *str,int length)

{

int i;

char *start, *end, temp;



start  = str;     //pointer to beginning of string

end    = str;     //pointer to end of string



for (i = 0; i < length - 1; i++)

end++;



for (i = 0; i < length/2; i++)

{

temp   = *end;

*end   = *start;

*start = temp;



start++;

end--;

}

}

int main()

{

int size = 100, bytes_read, length;

char *string;



printf("Enter some text of your choice: ");



string = (char *) malloc (size);

bytes_read = getline (&string, &size, stdin);



length = bytes_read - 1;



reverse(string, (length - 1));



printf("The string after reversing is: %s\n", string);



return 0;

}