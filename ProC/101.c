//Palindrome program in C

#include <stdio.h>

int check_palindrome(char*, int);

void copy_string(char*, char*);

void reverse_string(char*, int);

int compare_string(char*, char*);

int main()

{

char *string;

int result, size = 100, bytes_read, l;



printf("Enter a string: ");



string = (char *) malloc (size);

bytes_read = getline (&string, &size, stdin);



l = bytes_read - 1;



result = check_palindrome(string, l);



if (result == 1)

printf("Entered string is a palindrome.\n");

else

printf("Entered string is not a palindrome.\n");



return 0;

}



int check_palindrome(char *string, int length)

{

int check;

char *reverse;



reverse = (char*)malloc(length+1);



copy_string(reverse, string);



reverse_string(reverse, length);



check = compare_string(string, reverse);



free(reverse);



if (check == 0)

return 1;

else

return 0;

}





void copy_string(char *dest, char *source)

{

while(*source)

{

*dest = *source;

source++;

dest++;

}

*dest = '\0';

}



void reverse_string(char *string, int length)

{

int c;

char *start, *end, temp;



start = string;

end = string;



for (c = 0; c < (length - 1); c++)

end++;



for (c = 0; c < length/2; c++)

{

temp = *end;

*end = *start;

*start = temp;



start++;

end--;

}

}



int compare_string(char *string, char *reverse)

{

while(*string==*reverse)

{

if (*string == '\0' || *reverse == '\0')

break;



string++;

reverse++;

}

if (*string == '\0' && *reverse == '\0')

return 0;

else

return -1;

}