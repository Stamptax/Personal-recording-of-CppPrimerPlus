#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	long long gp;
	long long up;
	cout<<"Enter the global population ";
	cin>>gp;
	cout<<"Enter the US population ";
	cin>>up;
	double r;
	r=float(up)/float(gp)*100;
	cout<<"The population of the US is "<<r<<"% of the global population";
	return 0;
	}
