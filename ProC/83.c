//Prime number Program in C

#include<stdio.h>

int  main()
    
    {
    
       int  num;
    
       int  c = 2;
    
       printf("Enter a number:");
    
       scanf("%d", & amp; num);
    
       for  (c = 2 ; c & lt; = num - 1 ; c++)
    
       {
    
          if  (num % c == 0 ) // we are checking if num is divisible by any number other than 1 and itself
    
          {
    
             printf("%d isn't prime.\n", num);
    
             break;
    
          }
    
       }
    
       if  (c == num)
    
          printf("%d is prime.\n", num);
    
       return  0;
    
    }