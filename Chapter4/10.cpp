#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<float,3>time;
	cout<<"input the first recod ";
	cin>>time[0];
	cout<<"input the second record ";
	cin>>time[1];
	cout<<"input the third record ";
	cin>>time[2];
	float avr=(time[0]+time[1]+time[2])/3;
	cout<<"the average time is "<<avr<<endl;
	cout<<"The first time is: "<<time[0]<<"s\n";
	cout<<"The second time is: "<<time[1]<<"s\n";
	cout<<"The third time is: "<<time[2]<<"s\n";
	return 0;
	}
	
