#include <stdio.h>
int main()
{
      int num;
      printf("Enter value of num:");
      scanf("%d",&num);
      switch (num)
      {
          case 1:
             printf("You have entered value 1\n");
             break;
          case 2:
             printf("You have entered value 2\n");
             break;
          case 3:
             printf("You have entered value 3\n");
             break;
          default:
             printf("Input value is other than 1,2 & 3 ");
     }
     return 0;
}