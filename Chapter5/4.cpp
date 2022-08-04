#include<iostream>
using namespace std;
int main()
{
	int d = 100;
	double c = 100;
	int i;
	cout << "D: 100   C: 100" << endl;
	for (i = 0; c <= d; i++)
	{
		d += 10;
		c += c * 0.05;
	}
	cout << "D: " << d << "   " << "C: " << c << endl;
	cout << "Takes " << i << " years";
	return 0;
}