#include"mytime0.h"

Time::Time()
{
	hrs = mins = 0;
}

Time::Time(int h, int m)
{
	hrs = h;
	mins = m;
}

void Time::addmin(int m)
{
	mins += m;
	hrs += mins / 60;
	mins %= 60;
}

void Time::addhr(int h)
{
	hrs += h;
}

void Time::reset(int h, int m )
{
	hrs = h;
	mins = m;
}

Time operator+(const Time& t1, const Time& t2)
{
	Time temp;
	temp.hrs = t1.hrs + t2.hrs + (t1.mins + t2.mins) / 60;
	temp.mins = (t1.mins + t2.mins) % 60;

	return temp;
}

Time operator-(const Time& t1, const Time& t2)
{
	Time temp;
	int total_mins_t1, total_mins_t2, diff_mins;
	total_mins_t1 = t1.hrs * 60 + t1.mins;
	total_mins_t2 = t2.hrs * 60 + t2.mins;
	diff_mins = abs(total_mins_t1 - total_mins_t2);
	temp.hrs = diff_mins / 60;
	temp.mins = diff_mins % 60;

	return temp;
}

Time operator*(double n, const Time& t)
{
	Time result;
	long totalmins = n * t.hrs * 60 + n * t.mins;
	result.hrs = totalmins / 60;
	result.mins = totalmins % 60;

	return result;
}

Time operator*(const Time& t, double n)
{
	Time result;
	long totalmins = n * t.hrs * 60 + n * t.mins;
	result.hrs = totalmins / 60;
	result.mins = totalmins % 60;

	return result;
}

ostream& operator<<(ostream& os, const Time& t)
{
	os << t.hrs << " hours, " << t.mins << " mins";
	return os;
}