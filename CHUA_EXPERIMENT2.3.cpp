#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void Reverse(string w);
int main()
{
	string w = "";

	cout << "Enter a word: ";
	getline(cin, w);

	cout << "The reversed version of the word is ";

	Reverse(w);
	cout << endl;

	return 0;
}

void Reverse(string w)
{
	if (w == "")
	{
		return;
	}
	else
	{
		Reverse(w.substr(1));
		cout << w.at(0);
	}
}