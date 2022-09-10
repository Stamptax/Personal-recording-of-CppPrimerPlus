#include<iostream>
using namespace std;
template <class T>
T max5(T n[]);

int main()
{
	int arr1[5];
	cout << "Enter 5 integers: \n";
	for (int i = 0; i < 5; i++)
		cin >> arr1[i];
	cout << max5(arr1);
	cout << "\nEnter 5 doubles: \n";
	double arr2[5];
	for (int i = 0; i < 5; i++)
		cin >> arr2[i];
	cout << max5(arr2);
	return 0;
}

template <class T>
T max5(T n[])
{
	T max;
	if (n[0] + n[1] < n[2] + n[3] + n[4])
	{
		max = n[2] < n[3] ? n[3] : n[2];
		max = max < n[4] ? n[4] : max;
	}
	else
	{
		max = n[0] < n[1] ? n[1] : n[0];
	}
	return max;
}