#include<iostream>
#include"golf.h"
using namespace std;

int main()
{
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);
	golf andy;
	cout<<setgolf(andy);
	showgolf(andy);
	srand(time(0));
	handicap(andy, rand());
	showgolf(andy);
	
	return 0;
}
