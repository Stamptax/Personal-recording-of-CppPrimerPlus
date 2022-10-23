#include<iostream>
#include"Sale.h"
using SALES::Sales;

int main()
{
	Sales s1;
	
	double arr[2] = { 2.4,5.7 };
	Sales s2=Sales(arr, 2);
		
	s1.showSales();
	s2.showSales();
    
	return 0;
}