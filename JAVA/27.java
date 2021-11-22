/* Program to enter a string and print it after removing all spaces.*/

import java.util.*;
class RemoveSpace
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter String: ");
String s=inp.nextLine();
int k=s.length();
int i;
String z="";
char c;

for(i=0;i<k;i++)
{
c=s.charAt(i);
if(c!=32)
z=z+c;
}

System.out.println("String After Removing Spaces: "+z);

}
}