
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout << "Enter characters, '@' to stop:\n";
	cin.get(ch);
	while (ch != '@')
	{
		if (islower(ch))
		{
			ch = toupper(ch);
		}
	    
	    else if (isupper(ch))
		{
			ch=tolower(ch);
		}
		
		if (isdigit(ch) == 0)

		{
			cout << ch;
		}
		
		cin.get(ch);
	};
	return 0;
}