#include <iostream>
using namespace std;

int GCD(int a, int b);

int main()
{
	int a, b;
	char choice = 'y';

	while (choice == 'y')
	{
		cout << "Enter the first positive integer: ";
		cin >> a;
		while (a < 0)
		{
			cout << "Enter a positive integer!!" << endl;
			cin >> a;
		}
		
		cout << "Enter the second positive integer: ";
		cin >> b;
		while (b < 0)
		{
			cout << "Enter a positive integer!!" << endl;
			cin >> b;
		}
		cout << "The GCD of " << a << " & " << b << " is: " << GCD(a, b) <<"\n"<< endl;
		cout << "Would you like to retry? : ";
		cin >> choice;
		cout << "\n";
	}

	system("pause");
	return 0;
}

int GCD(int a, int b)
{
	if (b != 0)
		return GCD(b, a % b);
	else
		return a;
}
