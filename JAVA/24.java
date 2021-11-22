/* Program to check if entered character is vowel or not using Switch Case*/
import java.util.*;
class SwitchVowel
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Character: ");
char c=((inp.nextLine()).charAt(0));
char z=Character.toUpperCase(c); //Changing Value to UpperCase for uniformity.

switch(z) //Checking Vowel Character using Switch Case
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U': System.out.println(c+" is a Vowel.");
break;

default: System.out.println(c+" is a Non-Vowel Character.");
}

}
}