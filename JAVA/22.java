/* Program to check if entered character is vowel or not using if-else*/
import java.util.*;
class CheckVowel
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Character: ");
char c=((inp.nextLine()).charAt(0));
char z=Character.toUpperCase(c); //Changing Value to UpperCase for uniformity.

if(z=='A' || z=='E' || z=='I' || z=='O' || z=='U')    //Checking if Vowel
  System.out.println(c+" is a Vowel.");
else
   System.out.println(c+" is not a Vowel."); 
   
}
}
