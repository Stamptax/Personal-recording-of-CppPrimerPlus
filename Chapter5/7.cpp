#include <iostream>
using namespace std;
int main()
{
	struct car
	{
		char name[20];
		int year;
	};

	int n;
	cout<<"How many cars you wish to catalog?";
	cin>>n;
	cin.get();
	car*kar=new car[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Car #"<<i+1<<":"<<endl;
		cout<<"Plz enter the make: ";
		cin.get(kar[i].name,20).get();
		cout<<"Plz enter the year made: ";
		cin>>kar[i].year;
		cin.get();
		};
		cout<<"Here is your collection:"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<kar[i].year<<" "<<kar[i].name<<endl;
			};
			return 0;
			}
	
		
	
