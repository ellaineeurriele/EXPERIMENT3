#include <iostream>
#include <conio.h>
using namespace std;

const int p = 3;
const int w = 7;

int main()
{
	int temperature[p][w];

	cout << "Enter the temperature for 7 days of three provinces." << "\n";

	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cout << "Province " << i + 1 << ", Day " << j + 1 << " : ";
			cin >> temperature[i][j];
		}
	}
	cout << "Displaying Values";

	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cout << "Province " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
		}
	}

	return 0;
}