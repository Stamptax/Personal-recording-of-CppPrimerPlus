#include "Stonewt.h"

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / lbs_per_stn;
	pds_left = int(lbs) % lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = lbs + stn * lbs_per_stn;
}

Stonewt Stonewt::operator+(const Stonewt& st)
{
	return stone + st.stone;
}

Stonewt Stonewt::operator-(const Stonewt& st)
{
	return abs(stone - st.stone);
}

Stonewt Stonewt::operator*(const Stonewt& st)
{
	return stone * st.stone;
}


bool Stonewt::operator<(const Stonewt& st)
{
	if (stone < st.stone)
		return true;
	else
		return false;
}

bool Stonewt::operator>(const Stonewt& st)
{
	if (stone > st.stone)
		return true;
	else
		return false;
}

bool Stonewt::operator==(const Stonewt& st)
{
	if (stone == st.stone)
		return true;
	else
		return false;
}