#include <iostream>
using namespace std;
double cal(double n, double m);
int main()
{
	double L;
	double km;
	cout<<"Enter the distance in km: ";
	cin>>km;
	cout<<"Enter the consumption of the fuel in L: ";
	cin>>L;
	cout<<"The car goes "<<cal(L,km)<<" Km per L"; 
	return 0;
	}
double cal(double n, double m)
	{
		return m/n;
		}
	