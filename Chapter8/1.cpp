#include<iostream>
using namespace std;
void display(char arr[], int n);

int main()
{
	char str[30];
	cout << "Input some words\n";
	cin.get(str, 30);
	cin.get();
	cout << "Input the second parameter\n";
	int n;
	cin >> n;
	display(str,n);
	return 0;
}

void display(char arr[], int n)
{
	cout << arr << endl;
	if (n == 0)
		return;
	display(arr,n-1);
	
}