#include<iostream>
using namespace std;
double* fill_array(double[], int);
void show_array(double[], double*);
void reverse_array(double[], double*);
const int arrsize = 8;

int main()
{

	double arr[arrsize];
	double*end=fill_array(arr, arrsize);
	show_array(arr, end+1);
	reverse_array(arr, end);
	show_array(arr, end+1);
	reverse_array(arr + 1, end-1);
	show_array(arr, end+1);
	return 0;
}

double*fill_array(double a[], int size)
{
	cout << "Please enter numbers to fill array or input any character to terminate\n";
	double buffer;
	int i;
	for (i = 0; i < size; i++)
	{
		cin >> buffer;
		if (cin.fail())
		{
			cin.clear();
			break;
		}
		else
			a[i] = buffer;
	}
	cout << "\nDone!";
	return &a[i-1];
}

void show_array(double a[], double*pt)
{
	cout << "\nNow let's have a look\n";
	for (a,pt; a!=pt; a++)
		cout << *a << " ";
}


void reverse_array(double a[], double* pt)
{
	double buffer;
	for (a, pt; a < pt; a++, pt--)
	{
		buffer = *a;
		*a = *pt;
		*pt = buffer;
	}

}
