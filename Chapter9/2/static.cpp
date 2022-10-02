#include<iostream>
#include<string>
using namespace std;
void strcount(const string str);
string input;
int main()
{
	
	cout << "Enter a line:\n";
	do
	{
		getline(cin, input);
		strcount(input);
		cout << "Enter next line (empty to quit):\n";
	} while (input!="");
	cout << "Bye\n";

	return 0;


}

void strcount(const string str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\"" << " contains ";
	while(str[count])
		count++;
		total += count;
		cout << count << " characters\n"
			<< total << " charatcters in total\n";
	
}