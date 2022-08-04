#include<iostream>
#include <iomanip>

using namespace std;
int main()
{
	
	double s;
	double m;
	double d;
	
	
	
	cout<<endl;
	cout<<"Enter a latitude in degree, minutes, and second: "<<"\n";
	cout<<"First, enter the degrees: "<<"\n";
	cin>>d;
	cout<<"Next, enter the minutes of arc: "<<"\n";
	cin>>m;
	cout<<"Finally, enter the seconds of arc: "<<"\n";
	cin>>s;
	cout<<d<<" degrees,"<<m<<" minutes,"<<s<<" seconds= "<<setprecision(6)<<d+m/60+s/3600<<" degrees";
	return 0;  
	
	}   
