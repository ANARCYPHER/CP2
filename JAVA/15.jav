/* Program to print Diamond*/
import java.util.*;
class Diamond
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Any Character: ");
char c=((inp.nextLine()).charAt(0));
System.out.print("\n Enter Size Limit: ");
int n=inp.nextInt();
int i,j,x=(n-1);
System.out.println("Diamond: \n");

for(i=1;i<=n;i++)
{
for(j=1;j<=x;j++)
 System.out.print(" ");
x--;
for(j=1;j<=(2*i)-1;j++)
{
System.out.print(c);
}
System.out.println();
}
x=1;

for(i=1;i<=(n-1);i++)
{
for(j=1;j<=x;j++)
 System.out.print(" ");
x++;
for(j=1;j<=2*(n-i);j++)
 System.out.print(c);
 
System.out.println();
}

}
}