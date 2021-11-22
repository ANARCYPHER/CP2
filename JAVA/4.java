/* Program to enter a 2D matrix and print the transpose of the matrix */

import java.util.*;
class Transpose {
 public static void main() {
  Scanner inp = new Scanner(System.in);

  System.out.print("\n Enter Row Size: "); //Entering Dimensions
  int r = inp.nextInt();
  System.out.print("\n Enter Column Size: ");
  int c = inp.nextInt();

  int i, j;
  int arr[][] = new int[r][c]; //Creating N-size Array
  int t[][] = new int[r][c];
  for (i = 0; i < r; i++) //Entering N numbers in array
  {
   for (j = 0; j < c; j++) {
    System.out.print("\n Enter: ");
    arr[i][j] = inp.nextInt();
   }
  }

  for (i = 0; i < r; i++) //Transposing
  {
   for (j = 0; j < c; j++) {
    t[j][i] = arr[i][j];
   }
  }

  System.out.println("\n Original Matrix: ");
  for (i = 0; i < r; i++) {
   for (j = 0; j < c; j++) {
    System.out.print(arr[i][j] + " "); //Printing Original matrix
   }
   System.out.println();
  }

  System.out.println("\n Transpose Matrix: ");
  for (i = 0; i < r; i++) {
   for (j = 0; j < c; j++) {
    System.out.print(t[i][j] + " "); //Printing Transpose matrix by reversing Original
   }
   System.out.println();
  }

 }
}