#include <stdio.h>
int main()
{
      int var;
      for (var =100; var>=10; var --)
      {
           printf("var: %d\n", var);
           if (var==99)
           {
               break;
           }
      }
     printf("Out of for-loop");
     return 0;
}