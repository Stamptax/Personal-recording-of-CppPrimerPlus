#pragma once
#include<iostream>
using namespace std;

typedef int Item;

class List
{
	Item arr[10];         //data type is undefined, uses integer as example
	int top;
public:
	List();
	bool isempty();
	bool isfull();
	void visit(void (*pf)(Item&i));
	bool push(Item& i);
	void show();
};

void fix(Item& i);


