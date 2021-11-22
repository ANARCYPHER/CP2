/* Program to enter two strings and concatenate them as one*/
import java.util.*;
class StringConcat
{
public static void main()
{
Scanner inp=new Scanner(System.in);

System.out.print("\n Enter First String: ");
String s1=inp.nextLine();
System.out.print("\n Enter Second String: ");
String s2=inp.nextLine();

String z=s1+s2;
System.out.println("Concatenated String: "+z);

}
}