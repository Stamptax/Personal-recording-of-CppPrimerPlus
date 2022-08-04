#include<iostream>
using namespace std;

int main()
{
	double sum;
	double n;
	cout << "Input a number or 0 to stop " << endl;
	cin >> n;
	while (n != 0)
	{
		sum = sum + n;
		cout << "Input: " << n << "   " << "Sum: " << sum;
		cin >> n;
	}
	return 0;
}