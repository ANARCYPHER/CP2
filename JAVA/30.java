/* Program to enter a string and extract its Substring using function*/
import java.util.*;
class FuncSubString
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter String: ");
String s=inp.nextLine();
System.out.print("\n Enter Starting Index: ");
int st=inp.nextInt();
System.out.print("\n Enter Ending Index: ");
int en=inp.nextInt();
if(st<0 || en>(s.length()))
{
System.out.println("Invalid Index");
System.exit(0);
}
int i,k=s.length();
String z=s.substring(st,en);
System.out.println("Extracted Substring: "+z);
}
}