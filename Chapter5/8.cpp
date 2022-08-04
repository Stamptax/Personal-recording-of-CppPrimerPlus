#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n=20;
	char*words=new char[n];
	cout<<"Enter words (to stop, type the word done):"<<endl;
	int c=0;
	cin>>words;
	while(strcmp(words,"done")!=0)
	{
		cin>>words;
		c++;
		};
		cout<<"You entered a total of "<<c<<" words";
		delete [] words;
		return 0;
		}
		
