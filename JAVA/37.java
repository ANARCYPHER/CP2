import java.util.*;
class Armstrong
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Number: ");
int n=inp.nextInt();
int a,s=0,m=n;

while(n!=0)   // Extracting each digits and raising them to cubic power while accumulating its sum.
{
a=n%10;
s=s+(a*a*a);
n=n/10;
}

if(s==m)          // Checking if sum is equal to original number.
  System.out.println(m+" is an Armstrong Number");
else
  System.out.println(m+" is not an Armstrong Number");
  
}

}