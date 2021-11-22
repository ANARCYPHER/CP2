//C program to find maximum and minimum in array

#include <stdio.h>
int FindMax(int[],int);    //Function delcaration to find maximum number in array
int FindMin(int[],int);    //Function delcaration to find minimum number in array
int main(){
   int i, array[50], size, maximum, minimum;

   printf("Input number of elements in array\n");
   scanf("%d",&size);
   
   printf("Enter %d integers\n",size);

     for(i=0;i<size;i++)
       scanf("%d",&array[i]);
       
   maximum = FindMax(array,size); //calls the max function
   minimum = FindMin(array,size);  //calls the min function


   // Print maximum and minimum element
   printf("Maximum element in the array is:%d\n",maximum);
   printf("Minimum element in the array is: %d\n",minimum);
   
   return 0;
}

int FindMax(int a[],int n)     //function to find largest element
{
   int i, max;
   max = a[0];
   for(i=1;i<n;i++){
        if(a[i]>max){
// If current element is greater than max 
           max =a[i];
        }
   }
   return max; //returns the largest number to main function
}

int FindMin(int a[],int n)   //function to find smallest element
{
   int i, min;
   min = a[0];
   for(i=1;i<n;i++){
        if(a[i]<min){

// If current element is smaller than min 
           min =a[i];
        }
   }
   return min;                          //returns the smallest number to main function
}