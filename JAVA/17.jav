/* Program to check if entered number is Even or Odd. */
   
import java.util.*;
class EvenOdd
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Number: ");
int n=inp.nextInt();
int a=n%2;

if(a==0)
  System.out.println(n+" is an Even Number");
else
  System.out.println(n+" is an Odd Number");
  
}
}