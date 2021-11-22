/* Program to enter a string and print it after reversing it.*/
import java.util.*;
class ReverseString
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter String: ");
String s=inp.nextLine();
int k=s.length();
int i;
char c;
String z="";

for(i=(k-1);i>=0;i--)
{
c=s.charAt(i);
z=z+c;
}

System.out.println("Reversed String: "+z);

}
}