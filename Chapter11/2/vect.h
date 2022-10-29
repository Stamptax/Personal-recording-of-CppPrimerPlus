#pragma once
#include<iostream>
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode { RECT, POL };
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; };
		double yval() const { return y; };
		double magval()const { return sqrt(x * x + y * y); };
		double angval()const {
			if (x == 0.0 && y == 0.0)
				return 0.0;
			return atan2(y, x);
		};
		void pol_mode();
		void rect_mode();

		Vector operator+(const Vector& b)const;
		Vector operator-(const Vector& b)const;
		Vector operator-()const;
		Vector operator*(double n)const;

		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<<(std::ostream& os, const Vector& v);

	private:
		double x;
		double y;
		Mode mode;

		void set_x(double mag, double ang);
		void set_y(double mag, double ang);
	};
}

