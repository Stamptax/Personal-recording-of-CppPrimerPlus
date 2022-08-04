#include <iostream>
using namespace std;
double ca(double n);
int main()
{
	double l;
	double m;
	cout<<"Plz input a distance with long ";
	cin>>l;
	m=ca(l);
	cout<<"Its "<<m<<" m";
	return 0;
	}
double ca(double n)
	{
		double r=n*220;
		return r;
		}
