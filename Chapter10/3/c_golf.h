#pragma once
#include<iostream>
#include<string>
using namespace std;

class c_golf
{
private:
	string fullname;
	int hdcp;
public:
	c_golf()
	{
		fullname = "Ann Birdfree";
		hdcp = 24;
	};
	c_golf(c_golf&g)
	{
		cout << "\n\nPlease enter the name and the number of handicap: \n";
		getline(cin,fullname);
		cin >> hdcp;
	};
	
	void handicap(c_golf&g,int hc);
	void showgolf();
};

