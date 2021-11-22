/* Program to enter two 2D arrays of size m*n and p*q respectively and print the multiplication product of both the matrix */

import java.util.*;
class ProductMatrix
{
public static void main()
{
Scanner inp=new Scanner(System.in);
int r1,c1,r2,c2,i,j,k;

System.out.print("\n Enter Dimensions of First Matrix (Row * Column) : \n");
r1=inp.nextInt();
c1=inp.nextInt();
System.out.print("\n Enter Dimensions of Second Matrix (Row * Column) : \n");
r2=inp.nextInt();
c2=inp.nextInt();

if(c1!=r2)
{
 System.out.println("Number of Columns of First Matrix should be equal to Number of Rows of Second Matrix");
 System.exit(0);
}

int a[][]=new int[r1][c1];
System.out.println("Enter into First Matrix: ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
System.out.print("\n Enter: ");
a[i][j]=inp.nextInt();
}
}

int b[][]=new int[r2][c2];
System.out.println("Enter into Second Matrix: ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
System.out.print("\n Enter: ");
b[i][j]=inp.nextInt();
}
}

int pro[][]=new int[r1][c2]; 
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
for(k=0;k<c1;k++)
{
pro[i][j]=pro[i][j]+(a[i][k]*b[k][j]);
}
}
}

System.out.println("\n First Matrix: ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
System.out.print(a[i][j]+" ");
}
System.out.println();
}

System.out.println("\n Second Matrix: ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
System.out.print(b[i][j]+" ");
}
System.out.println();
}

System.out.println("\n Product Matrix: ");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
System.out.print(pro[i][j]+" ");
}
System.out.println();
}

}
}