//substring program in C

#include <stdio.h>

#include <stdlib.h>



char *find_substring(char *string, int position, int length)

{

char *pointer;

int i;



pointer = malloc(length+1);



if (pointer == NULL)

{

printf("Unable to allocate memory.\n");    //possibility since dynamic allocation

exit(1);

}



for (i = 0 ; i < length ; i++)

{

*(pointer+i) = *(string+position-1);

string++;

}



*(pointer+i) = '\0';



return pointer;      //it returns pointer to the substring

}



int main()

{

char *str, *pointer;

int start, length, l, size = 100;



printf("\n Enter the main string: ");

str = (char*)malloc(size);

length = getline(&str, &size, stdin);



length --;



printf("\nEnter the position and length of substring (Index starts from 0): \n");

scanf("%d %d", &start, &l);



if(start < 0 || start > length)

printf("The start index position entered is invalid.\n");

else

{

pointer = find_substring( str, start, l);



printf("The substring is: %s", pointer);

}



free(pointer);



return 0;

}
