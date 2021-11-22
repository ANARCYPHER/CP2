/* Program to enter two strings and print it after swapping both of them.*/
import java.util.*;
class SwapString
{
public static void main()
{
Scanner inp=new Scanner(System.in);

System.out.print("\n Enter First String: ");
String s1=inp.nextLine();
System.out.print("\n Enter Second String: ");
String s2=inp.nextLine();
String x="";

x=s1;
s1=s2;
s2=x;

System.out.println("After Swapping: ");
System.out.println("First String: "+s1);
System.out.println("Second String: "+s2);
}
}