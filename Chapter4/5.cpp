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
		CandyBar snack
		{
			"Mocha Munch",
			2.3,
			350
			};
			CandyBar*pt=&snack;
			cout<<"The name of the refreshment is: "<<pt->name<<endl;
			cout<<"The weight of the snack is: "<<pt->weight<<endl;
			cout<<"The calorie of the dessert is: "<<pt->calorie<<endl;
			return 0;
			}
