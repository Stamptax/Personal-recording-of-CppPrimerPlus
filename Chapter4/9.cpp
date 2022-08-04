#include <iostream>
using namespace std;
int main()
{
struct CandyBar
	{
		char name[30];
		float weight;
		int calorie;
		};
	int size=5;
	CandyBar*cdb=new CandyBar[size];
		cdb[0]={"first", 20, 25};
		cdb[1]={"second",30,35};
		cdb[2]={"third",40,45};
		cout<<"The first data is: "<<cdb[0].name<<" "<<cdb[0].weight<<" "<<cdb[0].calorie<<endl;
		cout<<"The first data is: "<<cdb[1].name<<" "<<cdb[1].weight<<" "<<cdb[1].calorie<<endl;
		cout<<"The first data is: "<<cdb[2].name<<" "<<cdb[2].weight<<" "<<cdb[2].calorie<<endl;
	 delete [] cdb;
		return 0;
		}
