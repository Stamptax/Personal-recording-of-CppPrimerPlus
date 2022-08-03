#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	double tax=0;
	double income=0;
	cout << "Please enter your income: ";
	cin >> income;
	while (cin.fail()==false)
	{
		if (income <= 5000 && income > 0)
			tax = 0;
		else if (income >= 5001 && income <= 15000)
			tax = 0.1 * income - 500;
		else if (income >= 15001 && income <= 35000)
			tax = 0.15 * income - 3250;
		else if (income > 35000)
			tax = 0.2 * income - 3000;
		else
		{
			cout << "INPUT NOT VALID";
			break;
		}
		cout << "Tax is: " << tax << endl;
		cin >> income;
	};
	cout << "INPUT NOT VALID";
	return 0;

}