#include<iostream>
#include"Sale.h"
#include<iomanip>

using namespace SALES;
using std::endl;

Sales::Sales( double ar[], int n)
{
	double mx = std::numeric_limits<double>::min();
	double mn = std::numeric_limits<double>::max();
	double total = 0.0;
	for (int i = 0; i < QUATERS; i++)
	{
		if (i < n)
		{
			sales[i] = ar[i];
		}
		else
			sales[i] = 0.0;
		total += sales[i];
		mx = sales[i] > mx ? sales[i] : mx;
		mn = sales[i] < mn ? sales[i] : mn;
	}
	average = total / 4;
	max = mx;
	min = mn;
}


Sales::Sales()
	{
	
		std::cout << "Please enter 4 sales:\n";
		for (int i = 0; i < QUATERS; i++)
		{
			std::cin >> sales[i];
		}
		average = (sales[0] + sales[1] + sales[2] + sales[3]) / 4.0;
		double mx = std::numeric_limits<double>::min();
		double mn = std::numeric_limits<double>::max();
		for (int i = 0; i < QUATERS; i++)
		{
			if (sales[i] > mx)
				mx = sales[i];

		}
		for (int i = 0; i < QUATERS; i++)
		{

			if (sales[i] < mn)
				mn = sales[i];

		}
		max = mx;
		min = mn;
	}

void Sales::showSales()
{
	std::cout << endl << "Mean: " <<  average << endl << "Max: " << max
		<< endl << "Min: " <<  min
		<< endl << sales[0] << "   " << sales[1] << "   " << sales[2] << "   " << sales[3];
}
