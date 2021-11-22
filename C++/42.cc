#include <iostream>
using namespace std;

int main()

{
	int num, n;

	cout << "Enter number\n";

	cin >> num;

	cout << "Enter bit number you wish to set\n";

	cin >> n;

	cout << "Bit set Successfully\n";

	cout << "Answer:" << (num | (1 << (n - 1)));

}