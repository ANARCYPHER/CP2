//Transpose matrix in C

#include<stdio.h>

int transpose(int (*arr1)[5], int row, int col); //function prototype

int main(){

   int arr1[5][5];    //declaring array of predefined size 5 x 5
   int i, j, row,col;

printf ("Enter the number of rows in the matrix\n");
scanf("%d", &row);

   printf ("Enter the number of columns in matrix\n");

scanf("%d", &col);

printf("Enter elements of the Matrix:\n");  

    for(i = 0; i < row; i++){

        for(j = 0; j < col; j++){
           scanf("%d", &arr1[i][j]);
        }
    }
   

   printf("Original strcuture of the Matrix:\n");  

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
           printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

   transpose(arr1, row, col);   
   
   return 0;   
}



int transpose(int (*arr1)[5], int row, int col){
   int i, j;
   int trans[5][5];

   for(i = 0; i < row; i++){ //Performing transpose
        for(j = 0; j < col; j++){

            trans[j][i] = (*arr1)[j];  //(*arr1) points to an array of 5 integers. initially will point to zeroth 1 D array. When i takes the value 1, even this pointer needs to be incremented in order to point to next 1D array.
   }
     arr1++;
    }

   printf("\nTranspose of matrix is as follows:\n");
    
   for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            printf("%d\t", trans[i][j]);
        }
       printf("\n");
    }
 }