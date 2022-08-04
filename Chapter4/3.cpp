#include <iostream>
#include <cstring>
using namespace std;
int main()
{ 
	
	char fix[3]=", ";
	char firstname[30];
	char familyname[30];
	cout<<"Enter your first name: ";
	cin.getline(firstname,30);
	cout<<"Enter your family name: ";
    cin.getline(familyname,30);
	strcat(firstname,fix);
	strcat(firstname,familyname);
	cout<<"Here's the info in a single string: "<<firstname;
	return 0;
	}
	

	
