#include <stdio.h>
#include <string.h>
int main()
{
     char mystr[30] = "I’m an example of function strchr";
     printf ("%s", strrchr(mystr, 'f'));
     return 0;
}