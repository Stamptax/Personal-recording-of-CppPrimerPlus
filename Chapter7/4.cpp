#include<iostream>
#include<iomanip>
using namespace std;
double winratea(double, double);
double winrateb(double, double);

int main()
{
	cout << "Game Start!\n"
		 << "Now we got 47 cards in A interval and 27 in B interval\n";
	long double R;
	const float poola = 47.0, poolb = 27.0, pcka = 5.0, pckb = 1.0;
	R=winratea(pcka, poola)*winrateb(pckb, poolb);
	cout << fixed << setprecision(15) << R;
	return 0;
}

double winratea(double c, double p)
{
	long double result = 1.0;
	for (c, p; c > 0; c--, p--)
		result = result * c / p;
	
	return result;
}

double winrateb(double c, double p)
{
	return c / p;
}