//Palindrome program in C

#include <stdio.h>

int main()

{

int num, rem = 0, rev, n ;

printf("Enter an integer to check if it is palindrome or not\n");

scanf("%d", &num);

n = num;

while (n != 0)              //reversing the number

{

rem = n % 10;

rev = rem + ( rev* 10);

n = n/10;

}



if (num == rev)                 //comparing to check palindrome or not

printf("%d number is a palindrome.\n", num);

else

printf("%d number isn't a palindrome.\n", num);



return 0;

}