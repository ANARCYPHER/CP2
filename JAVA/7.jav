* Program to enter a string and display in both UpperCase and LowerCase using String function.*/

import java.util.*;
class DisplayCase
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter String: ");
String s=inp.nextLine();

System.out.println("\n Upper Case: "+(s.toUpperCase()));
System.out.println("\n Lower Case: "+(s.toLowerCase()));

}
}