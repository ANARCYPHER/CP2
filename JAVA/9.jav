/* Program to Add N numbers user enters in Array and displaying the sum*/
import java.util.*;
class ArrSumOfNum
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Number of Numbers to be Calculated: ");
int n=inp.nextInt();
int i,sum=0;
int arr[]=new int[n];   //Creating N-size Array

for(i=0;i<n;i++)   //Entering N numbers in array
{
System.out.print("\n Enter: ");
arr[i]=inp.nextInt();
}

System.out.println();
for(i=0;i<n;i++)
{
System.out.print(arr[i]);
sum=sum+arr[i];       //Cumulative Sum

if(i<(n-1))
 System.out.print(" + ");
else
 System.out.print( " = ");
 
} 

System.out.print(sum);

}
}