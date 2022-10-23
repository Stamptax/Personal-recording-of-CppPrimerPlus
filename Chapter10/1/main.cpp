#include<iostream>
#include"bankaccount.h"
using namespace std;

int main() 
{
	double change, sum;
	char accountnumber[30], name[30];
	bankaccount  ba0, ba1;
	
	ba0 = bankaccount();
	ba0.fetch();
	
	cout << "\n\nPlease enter the name: " << endl;
	cin.get(name,30);
	cout << "Please enter the account number: " << endl;
	cin >> accountnumber;
	cout << "Please enter the sum of your deposits: " << endl;
	cin >> sum;
	ba1.set(name, accountnumber, sum);

	ba1.fetch();

	cout << "\n\nPlease enter the sum you want to save: " << endl;
	cin >> change;
	ba1.save(change);

	cout << "\nPlease enter the sum you want to withdraw: " << endl;
	cin >> change;
	ba1.withdraw(change);



	return 0;
}