#include<iostream>
using namespace std;
const int season = 4;
const char* sname[season] = { "Spring","Summer","Fall","Winter" };
struct expense {
	double expense[season];
};
void fill(expense*pt);
void show(expense*pt);

int main()
{
	expense e;
	expense* ps = &e;
	 fill(ps);
	 show(ps);
	return 0;
}

void fill(expense*pt)
{
	double buffer;
	cout << "Please enter expenditure for each season:\n";
	for (int i = 0; i < season; i++)
	{
		cout << "Enter " << sname[i] << " expenditure: ";
		cin >> buffer;
		if (cin.fail())
		{
			cout << "Bad Input";
			break;
		}
		else
			pt->expense[i] = buffer;
	}
}

void show(expense*pt)
{
	cout << "\nThe Expenditure\n";
	for (int i = 0; i < season; i++)
	{
		cout << sname[i] << ": " << pt->expense[i] << endl;
	}
}