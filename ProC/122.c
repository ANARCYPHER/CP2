//C program to find maximum and minimum in array

#include <stdio.h>

#define SIZE 50 //Defining max size of array

int main(){

   int array[SIZE];
   int i, max, min, size, pos1, pos2;

   // Input size of the array

   printf("Enter size of the array: ");
   scanf("%d", &size);

   // Input array elements
   printf("Enter elements in the array: ");
   for(i=0; i<size; i++){
       scanf("%d", &array[i]);
   }

   // Assume first element as maximum and minimum
   max = array[0];
   min = array[0];

   //Find maximum and minimum in all array elements.

   for(i=1; i<size; i++){
       // If current element is greater than max
       if(array[i] > max){
           max = array[i];
           pos1 = i + 1;
       }
       // If current element is smaller than min
       if(array[i] < min){
           min = array[i];
           pos2 = i + 1;
       }
   }

   // Print maximum and minimum element
   printf("Maximum element = %d is at position %d\n", max, pos1);
   printf("Minimum element = %d is at position %d\n", min, pos2);
   return 0;
}