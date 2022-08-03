#include<iostream>
#include<string>
using namespace std;
int main()
{
	int gp = 0;
	int p = 0;
	struct data 
	{
		double sum;
		string name;
	};
	int people;
	cout << "How many people donated:\n";
	cin >> people;
	data* doc = new data[people];
	cout << "Now please input the name and sum\n";
	for (int i = 0; i < people; i++)
	{
		cin>>doc[i].name;
		
		cin >> doc[i].sum;
		
	}
	for (int i = 0; i < people; i++)
	{
		if (doc[i].sum > 10000)
			gp++;
		else
			p++;
	}

    cout << "\nGrand Patrons\n";
	if (gp != 0)
	{
		for (int i = 0; i < people; i++)
		{
			if (doc[i].sum > 10000)
				cout << doc[i].name << "   " << doc[i].sum<<endl;
		}
	}
	else
		cout << "NONE";
	cout << "\nPatrons\n";
	if (p != 0)
	{
		for (int i = 0; i < people; i++)
		{
			if (doc[i].sum <= 10000)
				cout << doc[i].name<<endl;
		}
	}
	else
		cout << "NONE";
	return 0;
}