/* Program to check if a number is Prime or Not*/
import java.util.*;
class PrimeNumber
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Number: ");
int n=inp.nextInt();
int i,c=0;

for(i=1;i<=n;i++)
{
if(n%i==0)       //Checking if there are two factors of the number.
c++;
}

if(c==2)
System.out.println(n+" is a Prime Number");
else
System.out.println(n+" is not a Prime Number");

}
}