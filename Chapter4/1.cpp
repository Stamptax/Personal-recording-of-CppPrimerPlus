#include <iostream>
using namespace std;
int main()
{
	char fn[30];
	char ln[30];
	char g;
	int age;
	cout<<"whats ur first name"<<"\n";
	cin.get(fn,30).get();
	cout<<"whats ur last name"<<"\n";
	cin.getline(ln,30);
	cout<<"what letter grade do u deserve"<<"\n";
	cin>>g;
	cout<<"whats ur age"<<"\n";
	cin>>age;
	cout<<"name: "<<ln<<fn<<endl;
	cout<<"grade: "<<char(g+1)<<endl;
	cout<<"age: "<<age<<endl;
	return 0;
	}
	
