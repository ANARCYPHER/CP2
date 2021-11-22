//Multiplication of two matrices in C

#include <stdio.h>

void multiply(int arr1[5][5], int arr2[5][5], int, int, int);

int display(int result[5][5], int, int);

int main()

{

   int arr1[5][5], arr2[5][5], r1, c1, r2, c2, i, j;



   printf("Enter rows and column for first matrix: ");

   scanf("%d %d", &r1, &c1);



   printf("Enter rows and column for second matrix: ");

   scanf("%d %d",&r2, &c2);



   // Column of first matrix should be equal to row of second matrix

   while (c1 != r2)

   {

       printf("Error! Column of first matrix is not equal to row of second matrix.\n\n");

       printf("Enter rows and column for first matrix: ");

       scanf("%d %d", &r1, &c1);

       printf("Enter rows and column for second matrix: ");

       scanf("%d %d",&r2, &c2);

   }



   // Storing elements of first matrix.

   printf("\nEnter elements of first matrix row wise:\n");

   for(i=0; i<r1; i++)

       for(j=0; j<c1; j++)

       {

           scanf("%d", &arr1[i][j]);

       }



   // Storing elements of second matrix.

   printf("\nEnter elements of second matrix row wise:\n");

   for(i=0; i<r2; i++)

       for(j=0; j<c2; j++)

       {

           scanf("%d",&arr2[i][j]);

       }



   multiply(arr1, arr2, r1, c2, c1);

       

   return 0;

}

void multiply(int arr1[5][5], int arr2[5][5], int r, int c, int c1)

{

   int i, j, k, result[5][5];

   

   // Initializing all the elements of result matrix to 0

   for(i=0; i<r; ++i)

       for(j=0; j<c; ++j)

       {

           result[i][j] = 0;

       }



   // Multiplying matrices arr1 and arr2

   for(i=0; i<r; i++)

       for(j=0; j<c; j++)

           for(k=0; k<c1; k++)

           {

               result[i][j]+=arr1[i][k]*arr2[k][j];

           }

    

  display(result, r, c);

}



int display(int result[5][5], int r, int c)

{

   int i,j;

   

   printf("\nResult of Matrix Multiplication is:\n");

   for(i=0; i<r; i++)

   {

       for(j=0; j<c; j++)

       {

           printf("%d\t", result[i][j]);

       }

       

       printf("\n");

    }

    return 0;

}