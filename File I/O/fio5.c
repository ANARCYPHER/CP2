#include <stdio.h>
int main()
{
    FILE *fpr;
    /*Char array to store string */
    char str[100];
    /*Opening the file in "r" mode*/
    fpr = fopen("C:\\mynewtextfile.txt", "r");

    /*Error handling for file open*/
    if (fpr == NULL)
    {
       puts("Issue in opening the input file");
    }

    /*Loop for reading the file till end*/
    while(1)
    {
       if(fgets(str, 10, fpr) ==NULL)
            break;
       else
            printf("%s", str);
    }
    /*Closing the input file after reading*/
    fclose(fpr);
    return 0;
}