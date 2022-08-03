#include<iostream>
using namespace std;
void show(double arr[], int);
double mean(double arr[], int);
void input(double arr[], int);
const int arsize = 10;
int main()
{
	double arr[arsize];
	input(arr, arsize);
	double ave = mean(arr, arsize);
		show(arr, arsize);
		cout << endl << "The mean: " << ave;
		return 0;
}

void input(double arr[], int n)
{
	double buffer;
	cout << "Please enter 10 scores (input '-8964' to precede end)" << endl;
	for (int i = 0; i < n; i++)
	{
		
		cout << "Now enter No." << i + 1 << ": ";
		cin >> buffer;
		arr[i] = buffer;
		if (arr[i]==-8964)
		{
			
			break;
		}
	}

}

void show(double arr[], int n)
{
		cout << "The scores: " << endl;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] !=-8964)
				cout << arr[i] << " ";
			else
				break;
		}
}

double mean(double arr[], int n)
{
	double sum = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == -8964)
		{
			break;
		}
		sum +=arr[i];
	}
	if (sum == 0)
	{
		return 0;
	}
	else
	{
		return sum / i;
	}
}


