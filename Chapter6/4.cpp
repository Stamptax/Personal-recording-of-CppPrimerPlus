#include<iostream>
using namespace std;
void showmenu();
int main()
{
	struct bop {
		char fullname[25];
		char title[20];
		char bopname[25];
		int preference;
	};


	bop data[3] =
	{
		{
			"242",
			"Chairman",
			"Winnie",
			0
        },
		{
			"231",
			"Pre-Chairman",
			"Facial-Paralysis",
			1
        },
		{
			"212",
			"Mayor",
			"WesternLord",
			2
        }
	};




	cout << "Benevolent Order Programmer Report\n";
	showmenu();
	cout << "\nEnter your choice ";
	char ch;
	cin >> ch;
	while (true)
	{
		if (ch == 'a' || ch == 'b' || ch == 'c' ||  ch == 'd' )
		{
			switch (ch)
			{
			case 'a': {for (int i = 0; i < 3; i++)
				cout << data[i].fullname << endl;
			
				break; }
			case 'b': {for (int i = 0; i < 3; i++)
				cout << data[i].title << endl;
				
				break; }
			case 'c': {for (int i = 0; i < 3; i++)
				cout << data[i].bopname << endl;
				
				break; }
			case 'd': {
				for (int i = 0; i < 3; i++)
			{
				switch (data[i].preference)
				{
				case 0:cout << data[i].fullname<<endl;
					break;
				case 1:cout << data[i].title<<endl;
					break;
				case 2:cout << data[i].bopname<<endl;
					break;
					
				}//switch2
			}//for
					break; }//case d

			}//switch
			
			break;
		}
		else if (ch == 'q')
		{
			cout << "Quit";
			break;
		}
		else 
		{
			cout << "NOT A VALID INPUT\n";
			break;
		}
		
	};
	
	return 0;
}

void showmenu()
{
	cout << "a) display by name             b) display by title"
		"c) display bybopname           d) display by preference\n"
		"q) quit";
};