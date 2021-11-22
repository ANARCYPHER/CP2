#include <iostream>
using namespace std;

int main()

{
	int n;

	cout << "Enter the count of numbers you wish to enter\n";	//inputting the numbers

	cin >> n;

	int row[n], col[n], arr[n], j = 0;

	cout << "Enter " << n << " numbers\n";

	for (int i = 0; i < n; ++i)

	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; ++i)	//finding the factors of n

	{
		if (n % i == 0)

		{

			row[j] = i;	//setting the factor as number of rows

			col[j] = n / i;	//finding corresponding number of columns

			++j;
		}
	}

	cout << "The numbers can be printed in " << j << " matrices\n";

	for (int i = 0; i <= j; ++i)	//printing the found matrices

	{
		int m = 0;

		for (int r = 0; r < row[i]; ++r)

		{

			for (int c = 0; c < col[i]; ++c)

			{

				cout << arr[m] << " ";

				++m;
			}

			cout << "\n";
		}

		cout << "\n\n";
	}

	return 0;

}