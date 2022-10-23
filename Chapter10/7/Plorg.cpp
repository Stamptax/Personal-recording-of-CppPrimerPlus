#include "Plorg.h"

Plorg::Plorg()
{
	ci = 50;
	strcpy_s(fullname, "Plorga");
}

void Plorg::show()
{
	cout <<  fullname
		<< endl << ci << endl;
}

void Plorg::fix()
{
	cout << "Please enter the new CI number:\n";
	cin >> ci;
}

void Plorg::initialisation()
{
	cout << "Please enter the fullname:\n";
	cin.get(fullname, 20);
	cin.get();
	cout << "Please enter the CI value:\n";
	cin >> ci;

}