//Palindrome program in C

#include <stdio.h>

int main()

{

char string[100];

int start, mid, end, size = 100, bytes_read, length, i, j;

printf("Enter a string: ");

string = (char *) malloc (size);

bytes_read = getline (&string, &size, stdin);

length = bytes_read - 1;   //since getline() stores '\n' at last block. hence bytesread - 1 = length of string.

end = length - 1;

mid = length/2;



for (start = 0; start < mid; start++, end--)

{

if (string[start] != string[end])

{

printf("Entered string is not a Palindrome.\n");

break;

}

}

if (start == mid)

printf("Entered string is a Palindrome.\n");



return 0;

}