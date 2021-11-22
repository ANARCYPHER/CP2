/* Program to check if entered character is vowel or consonant using if-else*/

import java.util.*;
class ConsVowel
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Character: ");
char c=((inp.nextLine()).charAt(0));
char z=Character.toUpperCase(c); //Changing Value to Upper Case for uniformity.

if(z=='A' || z=='E' || z=='I' || z=='O' || z=='U') //Checking if Vowel
System.out.println(c+" is a Vowel.");
else
{
if((c>=65 && c<=90) || (c>=97 && c<=122) ) // Checking if character is special character.
System.out.println(c+" is a Consonant.");
else
System.out.println(c+" is a Special Character.");
}

}
}