#include <stdio.h>
#include <string.h>
int main()
{
    /* String Declaration*/
    char nickname[20];

    printf("Enter your Nick name:");

    /* I am reading the input string and storing it in nickname
     * Array name alone works as a base address of array so
     * we can use nickname instead of &nickname here
     */
    scanf("%s", nickname);

    /*Displaying String*/
    printf("%s",nickname);

    return 0;
}