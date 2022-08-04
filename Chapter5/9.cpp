#include <iostream>
#include <string>
using namespace std;
using namespace std;
int main()
{
	int n=20;
	string words;
	cout<<"Enter words (to stop, type the word done):"<<endl;
	int c=0;
	cin>>words;
	while(words!="done")
	{
		cin>>words;
		c++;
		};
		cout<<"You entered a total of "<<c<<" words";
		
		return 0;
		}
		