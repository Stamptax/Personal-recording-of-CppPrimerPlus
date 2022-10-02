#include<iostream>
#include"SALES.h"
using namespace std;
using namespace SALES;

Sales s1, s2;

int main()
{
	double arr[2] = { 2.4,5.7 };
	setSales(s1, arr, 2);
	setSales(s2);
	showSales(s1);
	showSales(s2);
	return 0;
}