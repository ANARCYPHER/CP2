//Subtraction of two matrices in C

#include<stdio.h>

int sub_array(int arr1[][5], int arr2[][5], int row, int col); //function prototype

int main()

{

   int arr1[5][5], arr2[5][5];    //declaring array of predefined size 5 x 5

   int i, j, rows1,col1, rows2, col2;



printf ("Enter the number of rows in the first matrix\n");

scanf("%d", &rows1);



   printf ("Enter the number of columns in the first matrix\n");

scanf("%d", &col1);

printf ("Enter the number of rows in the second matrix\n");

scanf("%d", &rows2);



   printf ("Enter the number of columns in the second matrix\n");

scanf("%d", &col2);



if ((rows1 != rows2) || (col1!=col2))

{

 printf("\nThe matrices are not compatible. In order to perform subtraction of matrices number of rows and columns of the matrices should be equal.\n");

}



else

   {

    printf("Enter First Matrix Elements:\n");   //First Matrix

    for(i = 0; i < rows1; i++)

    {

        for(j = 0; j < col1; j++)

        {

           scanf("%d", &arr1[i][j]);

        }

    }



   printf("\nEnter Second Matrix Elements:\n"); //Second Matrix

    for(i = 0; i < rows2; i++)

    {

        for(j = 0; j < col2; j++)

        {

            scanf("%d", &arr2[i][j]);

        }

}



   sub_array(arr1, arr2, rows1, col1);

 }

   return 0;   

}



int sub_array(int arr1[][5], int arr2[][5], int row, int col)

{

   int i, j, sub[5][5];

   

   for(i = 0; i < row; i++) //Performing subtraction of Matrix 1 and 2

    {

        for(j = 0; j < col; j++)

        {

            sub[i][j] = arr1[i][j] - arr2[i][j];

        }

    }



   printf("\nSubtraction of matrices is as follows:\n");

   

    for(i = 0; i < row; i++)

    {

        for(j = 0; j < col; j++)

        {

            printf("%d\t", sub[i][j]);

        }

       printf("\n");

    }

 }