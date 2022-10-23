#pragma once
#include<iostream>
#include<string>
using namespace std;

class bankaccount
{
	string name;
	string accnum;
	double m_sum;
public:
	void set(string n, string an, double sum);
	void fetch();
	void save(double n);
	void withdraw(double n);
	bankaccount()
	{
		name = "null";
		accnum = "null";
		m_sum = 0;
	}
};

