/* Program to print Inverted Floyd Triangle*/
import java.util.*;
class InvNumFloyd
{
public static void main()
{
Scanner inp=new Scanner(System.in);
System.out.print("\n Enter Size Limit: ");
int n=inp.nextInt();
int i,j,x=0;
System.out.println("Inverted Floyd Triangle: \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
x++;
}

for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
{
System.out.print(x+" ");
x--;
}
System.out.println();
}

}
}