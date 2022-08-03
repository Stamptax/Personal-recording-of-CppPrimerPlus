#include<iostream>
using namespace std;
double calculate(double, double, double(*pf)(double, double));
double add(double, double);
double subduction(double, double);

int main()
{
	double r;
	double x, y;
	double (*pt[2])(double, double){add,subduction};
	cout << "Please input two positive numbers to calculate: \n";
	if (cin.fail())
	{
		cin.clear();
		cout << "Bad input";
	}
	else
	{

		cin >> x >> y;
		for (int i = 0; i < 2; i++)
		{
			r = calculate(x, y, pt[i]);

			cout << endl << "In situation " << i + 1 << " = " << r;
				
		}
	}
	return 0;
}

double add(double n, double m)
{
	return n + m;
}

double subduction(double n, double m)
{
	return n - m;
}

double calculate(double n, double m, double (*pf)(double, double))
{
	return (*pf)(n, m);
}