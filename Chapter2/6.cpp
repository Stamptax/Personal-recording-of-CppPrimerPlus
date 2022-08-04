#include <iostream>
using namespace std;
double ca(double n);
int main()
{
	double ly;
	cout<<"Enter the number of light years: ";
	cin>>ly;
	cout<<ly<<" light years = "<<ca(ly)<<" astronomical units";
	return 0;
	}
	
double ca(double n)
	{
		return n*63240;
		}

	