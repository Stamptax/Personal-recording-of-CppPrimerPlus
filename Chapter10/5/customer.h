#pragma once
#include<iostream>
using namespace std;

struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class stack
{
	enum{MAX=10};
	Item items[MAX];
	int top;
public:
	stack();
	bool ispempty() const;
	bool isfull() const;
	bool push(const Item&item);
	bool pop(Item& item);
};

