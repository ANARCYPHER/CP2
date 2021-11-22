//C program to find maximum and minimum in array

#include <stdio.h>

int main()

{

 int array[50], *maximum, *minimum, size, i;  //pointer variables declared for max and min

 printf("Enter the number of elements in array\n");

 scanf("%d", &size);

 printf("Enter array elements\n");

 for ( i = 0 ; i < size ; i++ )

   scanf("%d", &array[i]);

 maximum  = array; //maximum pointer will now point to the address of the first element

 minimum  = array; //minimum pointer will now point to the address of the first element

 

 for (i = 0; i < size; i++){

    //Finding the largest element in the array

   if (*(array+i) > *maximum){
      *maximum = *(array+i);
   }

 }

 printf("Maximum element in the array is %d.\n", *maximum);



  for (i = 0; i < size; i++){

    //Finding the smallest element in the array

     if (*(array+i) < *minimum){
      *minimum = *(array+i);
   }
 }

 printf("Minimum element in the array is %d.\n", *minimum);

 return 0;

}