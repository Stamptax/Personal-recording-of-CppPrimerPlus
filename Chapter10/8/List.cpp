#include "List.h"

List::List()
{
	top = 0;
}


bool List::isempty()
{
	return top == 0;
}

bool List::isfull()
{
	return top == 10;
}

void List::visit(void (*pf)(Item&i))
{
	for (int n = 0; n< top; n++)
		pf(arr[n]);
}

bool List::push(Item& i)
{
	if (top < 10)
	{
		arr[top++] = i;
		return true;
	}
	else return false;
}

void List::show()
{
	for(top;top>0;)
	cout << arr[--top] << endl;
}

void fix(Item& i)
{
	i += 1;
}
