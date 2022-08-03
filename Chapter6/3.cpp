#include<iostream>
#include<cctype>
using namespace std;
void showmenu();
int main()
{
	char ch;
	showmenu();
	cin>>ch;
	while (isalpha(ch))
	{
		switch (ch)
		{
		case'c':cout << "A maple is a carnivore\n";
			break;
		case 'p':cout << "A maple is a pianist\n";
			break;
		case't':cout << "A maple is a tree\n";
			break;
		case 'g':cout << "A maple is a game\n";
			break;
		default: {
			cout << "Please enter a valid input\n";
			cin.ignore();
		         }
		}
		
		cin >> ch;

	}
	return 0;
}

void showmenu()
{
	cout << "Please enter one of the following choices: \n"
		"c) carnivore             p) pianist\n"
		"t) tree                  g) game\n";

}