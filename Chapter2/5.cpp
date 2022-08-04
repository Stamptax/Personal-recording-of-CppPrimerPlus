#include <iostream>
using namespace std;
double convert(double n);
int main()
{
	double t;
	double r;
	cout<<"You could input a temperature in Celsius: ";
	cin>>t;
	r=convert(t);
	cout<<"Which is "<<r<<" dgrees Fahrenheit";
	return 0;
	}
double convert(double n)
	{
		return n*1.8+32.0;
		}
	
