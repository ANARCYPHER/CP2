#include <stdio.h>
int main() {   
    int number;
   
    printf("Enter an integer: ");  
 
    scanf("%d", &number);
    scanf("%c", &number);     
    
    printf("You entered: %d", number);
    printf("You entered: %c", number);
    
    return 0;
}
