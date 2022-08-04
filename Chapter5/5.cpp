#include <iostream>
using namespace std;
int main()
{
	const int months=12;
	const char*p[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	int sale[months];
	cout<<"Enter the sales for each month""\n";
	for(int i=0;i<months;i++)
	{
		cout<<p[i]<<": ";
		cin>>sale[i];
		};
	int sum=0;
	for(int i=0;i<months;i++)
		sum+=sale[i];
		cout<<"The sales for whole year is: "<<sum;
		return 0;
		}
