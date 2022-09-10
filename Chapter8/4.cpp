#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
using namespace std;

struct stringy
{
	char* str;
	int ct;
};
void set(stringy&, char[]);
void show(const stringy str, int time = 1);
void show(const char str[], int times = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	
	return 0;
}

void set(stringy& str, char arr[])
{
	char* temp = new char[50];
	strcpy(temp, arr);
	str.str = temp;
	str.ct = strlen(temp);

}

void show(const stringy str, int times)
{
	for (int i = 0; i < times; i++)
		cout << str.str << endl;
}

void show(const char str[], int times)
{
	for (int i = 0; i < times; i++)
		cout << str << endl;
}

