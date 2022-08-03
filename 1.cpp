#include<iostream>
using namespace std;
double hm(double, double);
int main()
{
	double x;
	double y;
	int c = 0;
	cout << "Input 2 numbers to calculate the Harmonic Average" << endl;
	cout << "Please enter x: ";
	cin >> x;
	cout<< "Please enter y: ";
	cin >> y;
	while (x != 0 && y != 0)
	{
		cout << "The harmonic mean of this pair of numbers is " << hm(x, y) << endl;
		cout << "Please enter x: ";
		cin >> x;
		cout << "Please enter y: ";
		cin >> y;
	}
	cout << "GG";
	return 0;
}
	

double hm(double n, double m)
{
	return 2.0 * n * m / (n + m);
}