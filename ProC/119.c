//Transpose matrix in C
#include<stdio.h>

int **transpose(int (*arr1)[5], int row, int col);              //function prototype for returning an array ; ** is

   also used to declare pointer to 2D array, it is    usually used in function declarations rather than for

   the array itself.

int main()

{

   int arr1[5][5];    //declaring array of predefined size 5 x 5

   int i, j, row,col;

   int **transmat;



printf ("Enter the number of rows in the matrix\n");

scanf("%d", &row);



    printf ("Enter the number of columns in matrix\n");

scanf("%d", &col);

printf("Enter elements of the Matrix:\n");  

    for(i = 0; i < row; i++)

    {

        for(j = 0; j < col; j++)

        {

           scanf("%d", &arr1[i][j]);

        }

    }

   

    printf("Original structure of the Matrix:\n");  

    for(i = 0; i < row; i++)

    {

        for(j = 0; j < col; j++)

        {

           printf("%d\t", arr1[i][j]);

        }

        printf("\n");

    }



 transmat = transpose(arr1, row, col);   

   printf("\nTranspose of matrix is as follows:\n");

    for(i = 0; i < col; i++)

    {

        for(j = 0; j < row; j++)

        {

            printf("%d\t", transmat[i][j]);

        }

       printf("\n");

    }

   

   //free the memory

   for(i = 0; i < col; i++) {

       free(transmat[i]);

   }

   free(transmat);

   

   return 0;   

}



int **transpose(int (*arr1)[5], int row, int col)

{

   int i, j;

   int **trans;

   trans = malloc(sizeof(int*) * row);

   

   for(i = 0; i < 3; i++) {

       trans[i] = malloc(sizeof(int*) * col);

   }

       for(i = 0; i < row; i++) //Performing transpose

    {

        for(j = 0; j < col; j++)

        {

            trans[j][i] = (*arr1)[j];  //(*arr1) points to an array of 5 integers. initially will point to zeroth

1 D array. When i takes the value 1, even this pointer needs

to be incremented in order to point to next 1D array.

        }

       

        arr1++;

    }

   

    return trans;

 }
#include<stdio.h>

int **transpose(int (*arr1)[5], int row, int col);              //function prototype for returning an array ; ** is

   also used to declare pointer to 2D array, it is    usually used in function declarations rather than for

   the array itself.

int main()

{

   int arr1[5][5];    //declaring array of predefined size 5 x 5

   int i, j, row,col;

   int **transmat;



printf ("Enter the number of rows in the matrix\n");

scanf("%d", &row);



    printf ("Enter the number of columns in matrix\n");

scanf("%d", &col);

printf("Enter elements of the Matrix:\n");  

    for(i = 0; i < row; i++)

    {

        for(j = 0; j < col; j++)

        {

           scanf("%d", &arr1[i][j]);

        }

    }

   

    printf("Original structure of the Matrix:\n");  

    for(i = 0; i < row; i++)

    {

        for(j = 0; j < col; j++)

        {

           printf("%d\t", arr1[i][j]);

        }

        printf("\n");

    }



 transmat = transpose(arr1, row, col);   

   printf("\nTranspose of matrix is as follows:\n");

    for(i = 0; i < col; i++)

    {

        for(j = 0; j < row; j++)

        {

            printf("%d\t", transmat[i][j]);

        }

       printf("\n");

    }

   

   //free the memory

   for(i = 0; i < col; i++) {

       free(transmat[i]);

   }

   free(transmat);

   

   return 0;   

}



int **transpose(int (*arr1)[5], int row, int col)

{

   int i, j;

   int **trans;

   trans = malloc(sizeof(int*) * row);

   

   for(i = 0; i < 3; i++) {

       trans[i] = malloc(sizeof(int*) * col);

   }

       for(i = 0; i < row; i++) //Performing transpose

    {

        for(j = 0; j < col; j++)

        {

            trans[j][i] = (*arr1)[j];  //(*arr1) points to an array of 5 integers. initially will point to zeroth

1 D array. When i takes the value 1, even this pointer needs

to be incremented in order to point to next 1D array.

        }

       

        arr1++;

    }

   

    return trans;

 }