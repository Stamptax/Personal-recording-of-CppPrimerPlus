#pragma once
#include<iostream>
#include<ostream>
class Stonewt
{
	enum {lbs_per_stn=14};
	enum mode{INT,FLOAT,STONE};
	mode form;
	int stone;
	double pounds;
	double pds_left;
	

public:
	friend std::ostream& operator<<(std::ostream& os, Stonewt& stw);
	Stonewt operator+(const Stonewt& stw);
	Stonewt operator-(const Stonewt& stw);
	Stonewt operator*(double n) { return Stonewt(pounds* n); }
	friend Stonewt operator*(double n, Stonewt& stw);

	void is_int() { form = INT; }
	void is_float() { form = FLOAT; }
	void is_stone() { form = STONE; }
	Stonewt(double lbs);
	Stonewt() {  stone = pounds = pds_left = 0; }
	Stonewt(int stn, double lbs);
	~Stonewt(){};
};

