#pragma once
#include<iostream>
using namespace std;

class Time
{
	int hrs;
	int mins;
public:
	Time();
	Time(int h, int m = 0);
	void addmin(int m);
	void addhr(int h);
	void reset(int h = 0, int m = 0);

	friend Time operator+(const Time& t1,const Time&t2);
	friend Time operator-(const Time& t1, const Time& t2);
	friend Time operator*(double n, const Time& t);
	friend Time operator*(const Time& t, double n);
	friend ostream& operator<<(ostream& os, const Time& t);
};