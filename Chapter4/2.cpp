﻿#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string str1;
	string str2;
	cout<<"Enter your name\n";
	getline(cin,str1);
	cout<<"Enter your favorite dessert\n";
	getline(cin,str2);
	cout<<"I have some delicious "<<str2<<" for you, "<<str1;
	return 0;
	}
