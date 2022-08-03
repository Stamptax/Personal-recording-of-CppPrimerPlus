#include<iostream>
using namespace std;
const int season = 4;
const char*sname[season] = {"Spring","Summer","Fall","Winter"};
void fill(double[], int);
void show(double[], int);

int main()
{
	double expense[season];
	fill(expense, season);
	show(expense, season);
	return 0;
}

void fill(double ex[], int n)
{
	double buffer;
	cout << "Please enter expenditure for each season:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << sname[i] << " expenditure: ";
		cin >> buffer;
		if (cin.fail())
		{
			cout << "Bad Input";
			break;
		}
		else
			ex[i] = buffer;
	}
}

void show(double ex[], int n)
{
	cout << "\nThe Expenditure\n";
	for (int i = 0; i < n; i++)
	{
		cout << sname[i] << ": " << ex[i]<<endl;
	}
}