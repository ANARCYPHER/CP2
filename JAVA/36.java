/* Program to enter two strings and check if they are anagrams*/
import java.util.*;
class Anagrams
{
public static void main()
{
Scanner inp=new Scanner(System.in);

System.out.print("\n Enter First String: ");
String s1=inp.nextLine();
System.out.print("\n Enter Second String: ");
String s2=inp.nextLine();
int n1=0,n2=0,i;

for(i=0;i<s1.length();i++)
 n1=n1+s1.charAt(i);
 
for(i=0;i<s2.length();i++)
 n2=n2+s2.charAt(i);
 
if(n1==n2)
  System.out.println(s1+" and "+s2+" are anagrams.");
else
  System.out.println(s1+" and "+s2+" are not anagrams.");
  
}
}