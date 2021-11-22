/* Program to print Floyd Triangle*/
import java.util.*;
class FloydTriangle
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Any Character: ");
char c=((inp.nextLine()).charAt(0));
System.out.print("\n Enter Size Limit: ");
int n=inp.nextInt();
int i,j,x=1;
System.out.println("Floyd Triangle: \n");

for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
System.out.print(c);
}
System.out.println();
}

}
}