/* Program to check if a number is Palindrome or not.
 * Palindrome Numbers are numbers which if reversed will result in the original number.
   Example: 11,121,1331,159951,4378734,etc. */

import java.util.*;

class Palindrome {
	public static void main() {
		Scanner inp = new Scanner(System.in);
		System.out.print("\n Enter Number: ");
		int n = inp.nextInt();
		int a, s = 0, m = n;

		while (n != 0) // Extracting each digits and accumulating its sum.
		{
			a = n % 10;
			s = s * 10 + a;
			n = n / 10;
		}

		if (m == s) // Checking if reverse and original are identical.
			System.out.println(m + " is a Palindrome Number");
		else
			System.out.println(m + " is not a Palindrome Number");

	}
}