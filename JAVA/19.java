/* Program to display reverse or mirror of a number. */
   
import java.util.*;
class NumReverse
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Number: ");
int n=inp.nextInt();
int a,s=0,m=n;

while(n!=0)   // Extracting each digits and accumulating its sum.
{
a=n%10;
s=s*10+a;
n=n/10;
}

System.out.println("Reverse of "+m+" is: "+s);

}
}