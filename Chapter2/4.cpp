#include <iostream>
using namespace std;
int ca(int n);
int main()
{
	int a;
	int m;
	cout<<"Input your age: ";
	cin>>a;
	m=ca(a);
	cout<<"Which is "<<m<<" months";
	return 0;
	}
int ca(int n)
	{
		int m;
		m=12*n;
		return m;
		}