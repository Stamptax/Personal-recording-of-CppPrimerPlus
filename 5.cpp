#include <iostream>
using namespace std;
long long recursion(unsigned);

int main()
{
	unsigned integer;
	cout << "Enter a positive integer to compute the factorial: ";
	cin >> integer;
	if (cin.fail()||integer<0)
	{
		cout << "Bad Input";
	}
	else if (integer==1||integer==0)
	{
		cout << "The factorial is: 1";
	}
	else
	{
	 long long r = recursion(integer);
	 cout << "The factorial is: " << r;
	}
	return 0;
}

long long recursion(unsigned n)
{
	if (n == 0)//递归会一直持续直到n-1=0，届时recursion（0），若不设置会发生返回负数的情况，程序无法运行
	{
		return 1;
	}
	return n *recursion(n - 1);
}