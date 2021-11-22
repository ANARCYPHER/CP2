/* Program to enter a String and check if it is Palindrome or not.*/
import java.util.*;
class PalindromeString
{
public static void main()
{
Scanner inp=new Scanner(System.in);

System.out.print("\n Enter String: ");
String s=inp.nextLine();
String z="";
char c;
int i,k=s.length();

for(i=(k-1);i>=0;i--)
{
c=s.charAt(i);
z=z+c;
}

if(z.equals(s)==true)   //Comparing Both Strings
  System.out.println(s+" is a Palindrome String");
else
  System.out.println(s+" is not a Palindrome String");
  
}
}