#include<iostream>
#include"golf.h"
using namespace std;


void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname,name);
	g.handicap = hc;
};

int setgolf(golf& g)
{
	cout << "\n\nPlz enter the name and the number of handicap: \n";
	cin.get(g.fullname, Len);
	cin.clear();
	cin >> g.handicap;
	if (strlen(g.fullname) == 0)
		return 0;
	else
		return 1;
};

void handicap(golf& g, int hc)
{
	g.handicap = hc;
};

void showgolf(const golf& g)
{
	cout <<endl<<"FULLNAME: "<< g.fullname << endl <<"NO. " << g.handicap;
};