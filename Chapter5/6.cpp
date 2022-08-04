#include <iostream>
using namespace std;
int main()
{
	int arr[3][12];
	char*month[12]{"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	cout<<"Plz enter the sale data for each month"<<endl;
    for(int i=0;i<3;i++)
	{
		cout<<"Data for the year"<<endl;
		for(int x=0;x<12;x++)
		{
			cout<<month[x]<<": ";
			cin>>arr[i][x];
			};
			};
			cout<<"The details:"<<endl;
			for(int i=0;i<3;i++)
			{
				cout<<endl<<"The data for "<<i+1<<" year"<<endl;
				for(int x=0;x<12;x++)
				{
					cout<<month[x]<<": "<<arr[i][x]<<"\t";
					};
					};
					int s;
					for(int i=0;i<3;i++)
			{
				
				for(int x=0;x<12;x++)
				{
					s=s+arr[i][x];
					};
					};
					
					cout<<"All sales are: "<<s;
					return 0;
					};
					
