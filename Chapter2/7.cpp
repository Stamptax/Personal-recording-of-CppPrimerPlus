#include <iostream>
using namespace std;
void show(int n, int m);
int main()
{
	int h;
	int mi;
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>mi;
	show(h,mi);
	return 0;
	}

void show(int n,int m)
	{
		cout<<"Time: "<<n<<" : "<<m;
		}