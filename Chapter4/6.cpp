#include <iostream>
using namespace std;
int main()
{
	struct candybar
	{
		char name[30];
		float weight;
		int calorie;
		};
		candybar cdb[3]=
		{
			{"fucking",
				24,
				240
				},
				{"ea",
					12,
					430
					},
					{"origin",
						23,
						237
						}
						};
						cout<<cdb[0].name<<cdb[1].name<<cdb[2].name;
						return 0;
						}
		
