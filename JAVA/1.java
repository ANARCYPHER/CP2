/* Program to enter two 2D arrays and print the Summation Matrix */

import java.util.*;
class AddMatrix
{
public static void main()
{
Scanner inp=new Scanner(System.in);
int r,c,i,j;

System.out.print("\n Enter Dimensions of Matrix (Row * Column) : ");
r=inp.nextInt();    
c=inp.nextInt();

int a[][]=new int[r][c];     //Creating Matrices of size R*C
int b[][]=new int[r][c];

System.out.println("Enter into First Matrix: ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
System.out.print("\n Enter: ");
a[i][j]=inp.nextInt();
}
}

System.out.println("Enter into Second Matrix: ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
System.out.print("\n Enter: ");
b[i][j]=inp.nextInt();
}
}

int sum[][]=new int[r][c]; 
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=a[i][j]+b[i][j];   //Calculating summation of corresponding elements in both matrix
}
}


System.out.println();
System.out.println("First Matrix: ");    // Displaying Result
display(a,r,c);
System.out.println("Second Matrix: ");
display(b,r,c);   //Function to display matrix when invoked.
System.out.println("Resultant Matrix after Addition: ");
display(sum,r,c);
}

public static void display(int arr[][],int row,int col)
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
System.out.print(arr[i][j]+" ");
}
System.out.println();
}
}

}