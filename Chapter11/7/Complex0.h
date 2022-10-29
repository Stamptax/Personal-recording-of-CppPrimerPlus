#pragma once
#include<iostream>
#include<complex>
using namespace std;

class Complex0
{
	double num;
	double cplx;
public:
	Complex0() { num = cplx = 0.0; }
	Complex0(double n, double m) { num = n; cplx = m; }
	
	Complex0 operator+(const Complex0& c);
	Complex0 operator-(const Complex0& c);
	Complex0 operator-();   //Conjugate
	Complex0 operator*(const Complex0& c);   //With a Complex
	
	friend Complex0 operator*(double n, const Complex0& c);   //With a real number
	friend ostream& operator<<(ostream& os,  const Complex0& c);
	friend istream& operator>>(istream& is, Complex0& c);

};

