/* Program to print Inverted Pascal Triangle*/
import java.util.*;
class InvPascalTriangle
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Any Character: ");
char c=((inp.nextLine()).charAt(0));
System.out.print("\n Enter Size Limit: ");
int n=inp.nextInt();
int i,j,k;
System.out.println("Inverted Pascal Triangle: \n");

for(i=n;i>=1;i--)
{
for(k=0;k<=(n-i);k++)
  System.out.print(" ");

for(j=i;j<=(2*i)-1;j++)
  System.out.print(c);

for(j=1;j<=(i-1);j++)
  System.out.print(c);
  
System.out.println();
}

}
}