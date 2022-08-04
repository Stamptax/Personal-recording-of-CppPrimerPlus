#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int feet;
	int inches;
	double metres;
	double pounds;
	double kg;
	const int inches_per_feet=12;
	const double metre_per_inches=0.0254;
	
	cout<<endl;
	
	cout<<" Input your height in feet and inches as well as your weight ";
	cin>>feet;
	cin>>inches;
	cin>>pounds;
metres=(inches+feet*inches_per_feet)*metre_per_inches;
	cout<<"Which means your height is "<<inches+feet*inches_per_feet<<" inches"<<"\n";
	cout<<"Also represents your height is "<<metres<<" metres"<<"\n";
	kg=pounds/2.2;
	cout<<"And your weight is "<<kg<<" kg";
	cout<<endl;
	cout<<"Finally your BMI is "<<kg/(metres*metres)<<endl;
	return 0;
	
	}
	
	
	
	
