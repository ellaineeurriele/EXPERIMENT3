#include <iostream>
#include <conio.h>
using namespace std;

int arr[10], n = 10, i, max, min;
double sum = 0;
double ave = 0;

int main()
{

	cout << "Enter Array Elements: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		ave = sum / 10;
	}

	max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << "Largest integer : " << max << "\n";
	cout << "Smallest integer : " << min << "\n";
	cout << "Total: " << sum << "\n";
	cout << "Average:" << ave << "\n";

	return 0;
}