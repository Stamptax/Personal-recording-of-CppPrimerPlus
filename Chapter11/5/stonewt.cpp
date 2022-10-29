#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
	
        stone = int(lbs) / lbs_per_stn;
	    pds_left = int(lbs) % lbs_per_stn+lbs-int(lbs);
	    pounds = lbs;
	
}

Stonewt::Stonewt(int stn, double lbs)
{
	
        stone = stn;
		pds_left = lbs;
		pounds = stn * lbs_per_stn + lbs;
	
		
	
}

Stonewt Stonewt::operator+(const Stonewt& stw)
{
	return Stonewt(pounds + stw.pounds);
}

Stonewt Stonewt::operator-(const Stonewt& stw)
{
	return Stonewt(pounds - stw.pounds);
}

Stonewt operator*( double n, Stonewt& stw)
{
	return n*stw;
}

std::ostream& operator<<(std::ostream&os,Stonewt& stw)
{
	if (stw.form == Stonewt::INT)
	{
		os << int(stw.pounds);
		return os;
	}
	else if (stw.form == Stonewt::FLOAT)
	{
		os << stw.pounds;
		return os;
	}
	else if (stw.form == Stonewt::STONE)
	{
		os << stw.stone;
		return os;
	}
	
}
