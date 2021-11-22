/* Program to enter two strings and concatenate them as one using String Function*/
import java.util.*;
class FuncConcat
{
public static void main()
{
Scanner inp=new Scanner(System.in);

System.out.print("\n Enter First String: ");
String s1=inp.nextLine();
System.out.print("\n Enter Second String: ");
String s2=inp.nextLine();

String z=s1.concat(s2);
System.out.println("Concatenated String: "+z);

}
}