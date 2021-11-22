/* Program to enter an array and find the maximum and minimum number */

import java.util.*;
class ArrMinMax
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Size of Array: ");
int n=inp.nextInt();
int i,sum=0;
int arr[]=new int[n];   //Creating N-size Array

for(i=0;i<n;i++)   //Entering N numbers in array
{
System.out.print("\n Enter: ");
arr[i]=inp.nextInt();
}

int max=arr[0],min=arr[0];  //Initializing with first element.

for(i=0;i<n;i++)
{
if(arr[i]>max)   //Checking Maximum element
 max=arr[i];

if(arr[i]<min)  //Checking Minimum element
 min=arr[i];
 
}
  
//Printing Result
System.out.println("\n Maximum Number: "+max);
System.out.println("\n Minimum Number: "+min);

}
}