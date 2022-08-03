#include<iostream>
using namespace std;
int fill_array(double [],int );
void show_array(double[], int);
void reverse_array(double[], int);
const int arrsize = 8;
int c;
int main()
{
	
	double arr[arrsize];
fill_array(arr, arrsize);
show_array(arr, c);
reverse_array(arr, c);
show_array(arr, c);
reverse_array(arr+1, c-2);
show_array(arr, c);
return 0;
}

int fill_array(double a[], int size)
{
	cout << "Please enter numbers to fill array or input any character to terminate\n";
	
	double buffer;
	for (int i=0;i<size;i++)
	{
		cin >> buffer;
		if (cin.fail())
		{
			cin.clear();
			break;
		}
		else
			a[i] = buffer;
		c++;
	}
	cout << "\nDone!";
	return c;
}

void show_array(double a[], int size)
{
	cout << "\nNow let's have a look\n";
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
}

void reverse_array(double a[], int size)
{
	cout << "\nReversed!";
	double buffer;
	for (int i = 0, n=size-1; i<n; i++,n--)
	{
		buffer = a[i];
		a[i] = a[n];
		a[n] = buffer;
	}
}