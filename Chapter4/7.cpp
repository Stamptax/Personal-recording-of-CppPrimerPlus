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
		pizza refreshment;
		cout<<"Enter the name of the corp: ";
		cin.getline(refreshment.name,30);
		cout<<"Enter the length of the pizza: ";
		cin>>refreshment.length;
		cout<<"Enter the weight of the pizza: ";
		cin>>refreshment.weight;
		cout<<" So the info about the pizza is here, name is "<<refreshment.name<<" and the length is "<<refreshment.length<<" also the weight is "<<refreshment.weight;
		return 0;
		}
		
