/* Program to enter a string and print it after sorting it Alphabetically.*/
import java.util.*;

class AlphabetSort {
	public static void main() {
		Scanner inp = new Scanner(System.in);
		System.out.print("\n Enter String: ");
		String s = inp.nextLine();
		int k = s.length();
		int i, j;
		char c;
		char arr[] = s.toCharArray();
		for (i = 0; i<k; i++) {
			for (j = (i + 1); j<k; j++) {
				if (arr[j]<arr[i]) {
					c = arr[i];
					arr[i] = arr[j];
					arr[j] = c;
				}
			}
		}

		System.out.println("Sorted String: ");
		for (i = 0; i<k; i++)
			System.out.print(arr[i]);
	}
}