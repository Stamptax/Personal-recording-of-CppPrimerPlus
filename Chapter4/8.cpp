#include <iostream>
using namespace std;
int main()
{
	struct pizza
	{
		char name[30];
		float length;
		float weight;
		};
		pizza*ps=new pizza;
		cout<<"input the length: ";
		cin>>ps->length;
		cin.get();
		cout<<"input the corp name: ";
		cin.getline(ps->name,30);
		cout<<"the name and length are: "<<ps->name<<", "<<ps->length;
		delete ps;
		
		
		return 0;
		}
