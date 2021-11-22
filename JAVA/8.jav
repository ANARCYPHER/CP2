/* Program to enter a string and print it after reversing it.*/

import java.io.*;
class RevStringFunc
{
public static void main()throws IOException
{
BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
System.out.print("\n Enter String: ");
String s=bf.readLine();
StringBuffer str=new StringBuffer(s);
str.reverse();
System.out.println("Reversed String: "+str);

}
}