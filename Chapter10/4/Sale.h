#pragma once
#include<iostream>

namespace SALES
{
	const int QUATERS = 4;
	class Sales
	{
		double sales[QUATERS];
		double average;
		double max;
		double min;
	public:
		Sales( double ar[], int n);
		Sales();
		void showSales() ;        //Maybe define this in the namespace is more clear and less verbose but...for the test i'll define it 
		                                       //in another file. I shall define in namespace in future
	};
}
