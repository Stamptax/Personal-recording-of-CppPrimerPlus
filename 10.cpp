#include<iostream>
using namespace std;
double calculate(double, double, double(*) (double, double));
double add(double, double);
double subduction(double, double);

int main()
{
	double x, y;
	cout << "Please input two positive numbers to calculate: \n";
	if (cin.fail())
	{
		cin.clear();
		cout << "Bad input";
	}
	else
	{
		
			cin >> x >> y;


		double q = calculate(x, y, add);
		double p = calculate(x, y, subduction);
		cout << endl << x << " + " << y << " = " << q
			<< endl << x << " - " << y << " = " << p;
	}
	return 0;
}

double add(double n, double m)
{
	return n + m;
}

double subduction(double n, double m)
{
	return n- m;
}

double calculate(double n, double m, double (*pf)(double, double))
{
	return (*pf)(n,  m);
}