#include"stonewt.h"
using std::cout;
using std::endl;

int main()
{
	Stonewt s1(37,7.9);
	s1.is_float();
	cout <<"Float: " << s1 << endl;
	s1.is_int();
	cout <<"Int: "<< s1 << endl;
	s1.is_stone();
	cout << "Stone: " << s1 << endl<<endl;
	
	Stonewt s2 = s1 * 3;
	s2.is_float();
	cout << "Float: " << s2 << endl;
	s2.is_int();
	cout << "Int: " << s2 << endl;
	s2.is_stone();
	cout << "Stone: " << s2 << endl << endl;

	Stonewt s3 = s1 + s2;
	s3.is_float();
	cout << "Float: " << s3 << endl;
	s3.is_int();
	cout << "Int: " << s3 << endl;
	s3.is_stone();
	cout << "Stone: " << s3 << endl << endl;

	Stonewt s4 = s2 - s1;
	s4.is_float();
	cout << "Float: " << s4 << endl;
	s4.is_int();
	cout << "Int: " << s4 << endl;
	s4.is_stone();
	cout << "Stone: " << s4 << endl << endl;

	return 0;
}