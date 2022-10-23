#include"List.h"

int main()
{
	List l;
	int x;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a integer to push: ";
		cin >> x;
		l.push(x);
	}
	cout << "\nAdd 1 to every data\n\n";
	l.visit(fix);
	l.show();

	
	return 0;
}