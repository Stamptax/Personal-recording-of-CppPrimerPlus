#include<iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show(box);
double computing(box*);

int main()
{
	box instance
	{
		"Martin",
		100.0,
		15.5,
		20.5,
		50.0
	};
	show(instance);
	box* ps = &instance;
	instance.volume=computing(ps);
	cout << endl <<"The new value of volume: "<< instance.volume;
	return 0;
}

void show(box stct)
{
	cout << stct.maker << endl << stct.height << endl << stct.length << endl << stct.width
		<< endl << stct.volume;
}

double computing(box* pt)
{
	
	pt->volume = pt->height * pt->length * pt->width;
	return pt->volume;
}