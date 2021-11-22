/* Program to input a string and print it after removing all vowels*/
import java.util.*;
class RemoveVowels
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter String: ");
String s=inp.nextLine();
int k=s.length();
int i,f=1;
String z="";
char c;

for(i=0;i<k;i++)
{
c=s.charAt(i);
if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' ||c=='U' || c=='u')
 f=0;
else
 z=z+c;
 
}

System.out.println("String Without Vowels: "+z);

}
}