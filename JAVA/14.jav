/* Program to print Inverted Pascal Triangle*/
import java.util.*;
class NumPascal
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Size Limit: ");
int n=inp.nextInt();
int i,j,x=1;
System.out.println("Pascal Triangle: \n");

for(i=1;i<=n;i++)
{
for(j=n;j>i;j--)
{
System.out.print(" ");
}
x=1;
for(j=1;j<=i;j++)
{
System.out.print(j+" ");
x=x*(i-j)/(j+1);
}
System.out.println();
}

}
}