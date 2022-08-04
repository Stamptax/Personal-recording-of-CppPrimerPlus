#include <iostream>
using namespace std;
int main()
{
	double c;
	cout<<"Enter the consumption of the car for 100km ";
	cin>>c;
	double g{c*3.785};
	cout<<"Which is equivalent to "<<62.14*3.785/g<<" MGP";
	return 0;
	}