#include<iostream>
#include<array>
using namespace std;
int main()
{
	const int arsize = 101;
	array<long double, arsize>factorials;
	factorials[0] = factorials[1] = 1;
	for (int i = 2; i < arsize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < arsize; i++)
		cout << i << " != " << factorials[i] << endl;
	return 0;

}