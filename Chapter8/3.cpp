#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string upper(string& str);

int main()
{
	string str;
	cout << "Enter a string (q to quit): ";
	getline(cin, str);
	while (str!="q")
	{
		cout<<upper(str);
		getline(cin, str);
	}
	cout << "Bye.";
	return 0;
}

string upper(string& str)
{
	for (int i = 0;str[i]; i++)
	{
		str[i] = toupper(str[i]);   //Did somethig stupid, I forgot that toupper converts one letter at a time as I tried to do "toupper(str)" XD
	}
	return str;
}