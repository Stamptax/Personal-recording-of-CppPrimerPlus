#pragma once
#include<iostream>
#include<limits>
#include<ostream>

using namespace std;

class Stonewt
{
	enum { lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt() { stone = pds_left = pounds = 0; }
	~Stonewt(){}

	Stonewt operator+(const Stonewt& st);
	Stonewt operator-(const Stonewt& st);
	Stonewt operator*(const Stonewt& st);

	bool operator<(const Stonewt& st);
	bool operator>(const Stonewt& st);
	bool operator==(const Stonewt& st);
	friend ostream& operator<<(ostream& os, const Stonewt& st) 
	{
		os << st.stone << endl;
		return os;
	}
};

