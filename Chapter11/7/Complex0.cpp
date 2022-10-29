#include "Complex0.h"

Complex0 Complex0::operator+(const Complex0& c)
{
	Complex0 temp;
	temp.num = num + c.num;
	temp.cplx = cplx + c.cplx;
	
	return temp;
}

Complex0 Complex0::operator-(const Complex0& c)
{
	Complex0 temp;
	temp.num = num - c.num;
	temp.cplx = cplx - c.cplx;

	return temp;
}

Complex0 Complex0::operator-()
{
	Complex0 temp;
	temp.num = num;
	temp.cplx = -cplx;
	return temp;
}

Complex0 Complex0::operator*(const Complex0& c)
{
	Complex0 temp;
	temp.num = (num * c.num) - (cplx * c.cplx);
	temp.cplx = (num * c.cplx) + (cplx * c.num);

	return temp;
}

Complex0 operator*(double n, const Complex0& c)
{
	Complex0 temp;
	temp.num = n*c.num;
	temp.cplx = n*c.cplx;

	return temp;
}

ostream& operator<<(ostream& os, const Complex0& c)
{
	os << "(" << c.num << "," << c.cplx << "i)\n";
		return os;
}

istream& operator>>(istream& is, Complex0& c)
{
	is >> c.num >> c.cplx;
	return is;
}