#include <iostream>
using namespace std;
int main()
{
	int row;
	cout<<"Enter the number of rows: ";
	cin>>row;
	for(int i=0;i<row;i++)
	{
	
		
		for(int d=0;d<row-(i+1);d++)
		cout<<".";
		for(int s=0;s<i+1;s++)
		cout<<"*";
		cout<<endl;
		};
		return 0;
		}
		