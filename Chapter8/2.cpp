#include<iostream>
#include<cstring>
#include<string>
using namespace std;

struct CandyBar
{
	char name[50];
	double weight;
	int calorie;
};

void set(CandyBar& cdb, const char* p = "Millennium Munch", double w = 2.85, int c = 350);
void display(const CandyBar& cdb);

int main()
{
	CandyBar cdb;
	set(cdb);
	display(cdb);    
	set(cdb, "yay", 3.77, 239);
	display(cdb);
	return 0;
}

void set(CandyBar& cdb, const char* p, double w, int c)
{
	strcpy_s(cdb.name, p);
	cdb.weight = w;
	cdb.calorie = c;
}

void display(const CandyBar& cdb)
{
	cout << "\nBrand Name: " << cdb.name << endl
		<< "Weight: " << cdb.weight << endl
		<< "Calorie: " << cdb.calorie;
}