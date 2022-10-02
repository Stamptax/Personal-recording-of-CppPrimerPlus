#include<iostream>
#include"SALES.h"
using namespace std;

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double max = 0.0;
		double min = 1000000000000.0;
		double total = 0.0;
		for(int i=0;i<QUATERS;i++)
		{
			if (i < n)
			{
				s.sales[i] = ar[i];
			}
			else
				s.sales[i] = 0.0;
			total += s.sales[i];
			max = s.sales[i] > max ? s.sales[i] : max;
			min = s.sales[i] < min ? s.sales[i] : min;
		}
		s.average = total / 4;
		s.max = max;
		s.min = min;

	}

	void setSales(Sales& s)
	{
		cout << "Please enter 4 sales:\n";
		for (int i = 0; i < QUATERS; i++)
		{
			cin >> s.sales[i];
		}
		s.average = (s.sales[0] + s.sales[1] + s.sales[2] + s.sales[3]) / 4.0;
		double max = 0.0;
		double min = 1000000000000.0;
		for (int i = 0; i < QUATERS; i++)
		{
			if (s.sales[i] > max)
				max = s.sales[i];

		}
		for (int i = 0; i < QUATERS; i++)
		{

			if (s.sales[i] < min)
				min = s.sales[i];

		}
		s.max = max;
		s.min = min;
	}

	void showSales(const Sales& s)
	{
		cout << endl << "Mean: " << s.average << endl << "Max: " << s.max
			<< endl << "Min: " << s.min
			<< endl << s.sales[0] << "   " << s.sales[1] << "   " << s.sales[2] << "   " << s.sales[3];
	}
}