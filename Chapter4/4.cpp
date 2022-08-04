#include <iostream>
#include <string>
using namespace std;
int main()
{
	string fn;
	string fmn;
	string fix=", ";
	cout<<"Enter your first name: ";
	cin>>fn;
	cout<<"Enter your family name: ";
	cin>>fmn;
	cout<<"Here's the information in a single string: "<<fn+fix+fmn;
	return 0;
	}
