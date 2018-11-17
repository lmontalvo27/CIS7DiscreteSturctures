#include <iostream>
using namespace std;

void Tower(int n, char Sour, char Aux, char Des)
{
	if (n == 1)
	{
		cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
		return;
	}

	Tower(n - 1, Sour, Des, Aux);
	cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
	Tower(n - 1, Aux, Sour, Des);
}

int main()
{
	int n;

	cout << "Enter number of disks: ";
	cin >> n;
	Tower(n, 'A', 'B', 'C');
	
	system("pause");
	
	return 0;
}
